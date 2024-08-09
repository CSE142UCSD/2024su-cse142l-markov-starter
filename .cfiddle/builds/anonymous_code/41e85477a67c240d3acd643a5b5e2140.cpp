
#include<cstdint>
#include<cstdlib>

extern "C" 
uint64_t * array(uint64_t * data, uint64_t size) {

    uint64_t sum=0;
    for(unsigned int i = 0; i < size; i++) {
        sum+=data[i];
    }
    data[0] = sum;
    return data;
	
}


int main() {
}

// Cfiddle-signature=41e85477a67c240d3acd643a5b5e2140