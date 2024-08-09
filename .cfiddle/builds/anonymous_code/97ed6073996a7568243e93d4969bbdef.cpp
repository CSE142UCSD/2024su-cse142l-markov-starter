
#include<cstdint>
#include<cstdlib>

extern "C" 
uint64_t * array(uint64_t * array,
		      unsigned long int size) {

    uint64_t sum=0;
    for(unsigned int i = 0; i < size; i++) {
        sum+=data[i];
    }
    data[0] = sum;
    return data;
	
}


int main() {
}

// Cfiddle-signature=97ed6073996a7568243e93d4969bbdef