#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

int main() {
    
    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000
    z = x & y; // 4 = 00000100
    z = x | y; // 14 = 00001110
    int z = x ^ y; // 10 = 00001010
    z = x << 1; // 12 = 00001100
    z = x >> 1; // 3 = 00000011
    
    return 0;
}

// C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm