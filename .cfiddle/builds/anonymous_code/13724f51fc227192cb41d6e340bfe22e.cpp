
extern "C"
#include"function_map.hpp"
#include<cstdint>

extern "C"
uint64_t* array(uint64_t * data, uint64_t size, uint64_t arg1) {
    uint64_t sum=0;
    for(uint x = 0; x < size; x++) {
        sum+=data[x];
    }

    data[0] = sum;
    return data;

}
// Cfiddle-signature=13724f51fc227192cb41d6e340bfe22e