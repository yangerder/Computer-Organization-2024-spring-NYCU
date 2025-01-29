#include "CacheManager.h"
#include <cmath>
#include <algorithm>
#include <math.h>

CacheManager::CacheManager(Memory* memory, Cache* cache){
    this->memory = memory;
    this->cache = cache;
    num_ways = 32;
    cache_size = cache->get_size();
    cache->set_block_size(this->block_size);
    num_sets = cache_size / (block_size * num_ways);
    offset = (unsigned int)log2(block_size);
    index_bits = static_cast<unsigned int>(std::log2(num_sets));
    tag = 32 - index_bits - offset;
    for (unsigned int i = 0; i < num_sets; ++i) {
        LRU_tracker[i] = std::vector<unsigned int>(num_ways);
        for (unsigned int j = 0; j < num_ways; ++j) {
            LRU_tracker[i][j] = j;
        }
    }
}

CacheManager::~CacheManager() {}


std::pair<unsigned, unsigned> CacheManager::map_address(unsigned int addr) {
    unsigned int index = (addr >> offset) & ((1 << index_bits) - 1);
    unsigned int tag = addr >> (index_bits + offset);
    return {index, tag};
}

void CacheManager::update_LRU(unsigned int set_index, unsigned int way) {
    auto& LRU = LRU_tracker[set_index];
    LRU.erase(std::remove(LRU.begin(), LRU.end(), way), LRU.end());
    LRU.emplace_back(way);
}


unsigned int* CacheManager::find(unsigned int addr) {
    auto [index, tag] = map_address(addr);
    auto index_offset = index * num_ways;
    for (unsigned int way = 0; way < num_ways; ++way) {
        auto& block = (*cache)[index_offset + way];
        if (block.tag == tag) {
            update_LRU(index, way);
            return &block[0];
        }
    }
    return nullptr;
}


unsigned int CacheManager::read(unsigned int addr) {
    unsigned int result;
    unsigned int* value_ptr = find(addr);
    if (value_ptr != nullptr) {
        result = *value_ptr;
    } else {
        auto [index, tag] = map_address(addr);
        unsigned int way_to_replace = LRU_tracker[index].front();
        Block& block = (*cache)[index * num_ways + way_to_replace];
        block.tag = tag;
        for (unsigned int i = 0; i < block_size; ++i) {
            block[i] = memory->read(addr);
        }
        update_LRU(index, way_to_replace);
        result = block[0];
    }
    return result;

}

void CacheManager::write(unsigned int addr, unsigned value) {
    auto [index, tag] = map_address(addr);
    unsigned int way = 0;
    for (; way < num_ways; ++way) {
        auto& block = (*cache)[index * num_ways + way];
        if (block.tag == tag) {
            block[0] = value;
            update_LRU(index, way);
            break;
        }
    }

    if (way == num_ways) {
        unsigned int way_to_replace = LRU_tracker[index].front();
        Block& block = (*cache)[index * num_ways + way_to_replace];
        block.tag = tag;
        block[0] = value;
        update_LRU(index, way_to_replace);
    }
    memory->write(addr, value);
}
