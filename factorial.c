#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

unsigned long long int factorial(unsigned int i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int main() {
    int i = 12;
    printf("Factorial of %d is %d\n", i, factorial(i));
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A