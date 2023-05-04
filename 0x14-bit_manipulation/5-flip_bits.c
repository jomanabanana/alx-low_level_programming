#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int xor_result = n ^ m;
    int count = 0;
    while (xor_result > 0) {
        count += xor_result & 1;
        xor_result >>= 1;
    }
    return count;
}
