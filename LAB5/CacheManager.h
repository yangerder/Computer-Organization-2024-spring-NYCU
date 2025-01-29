#pragma once

#include "Cache.h"
#include "Memory.h"
#include <vector>
#include <unordered_map>

class CacheManager {
private:
    Memory* memory;
    Cache* cache;
    unsigned int cache_size;
    unsigned int block_size = 4;
    unsigned int num_sets;
    unsigned int num_ways;
    unsigned int tag;
    unsigned int index_bits;
    unsigned int offset;

    std::unordered_map<unsigned int, std::vector<unsigned int>> LRU_tracker;

    std::pair<unsigned, unsigned> map_address(unsigned int addr);
    void update_LRU(unsigned int set_index, unsigned int way);

public:
    CacheManager(Memory* memory, Cache* cache);
    ~CacheManager();

    unsigned int* find(unsigned int addr);
    unsigned int read(unsigned int addr);
    void write(unsigned int addr, unsigned value);
};
