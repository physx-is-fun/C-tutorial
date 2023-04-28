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
    int  var1;
    char var2[10];
    printf("Address of var1 variable: %x\n", &var1  );
    printf("Address of var2 variable: %x\n", &var2  );

    int  var = 20;   // actual variable declaration
    int  *ip;        // pointer variable declaration
    ip = &var;  // store address of var in pointer variable
    printf("Address of var variable: %x\n", &var  );
    // address stored in pointer variable
    printf("Address stored in ip variable: %x\n", ip );
    // access the value using the pointer
    printf("Value of *ip variable: %d\n", *ip );

    int  *ptr = NULL;
    printf("The value of ptr is : %x\n", ptr  );
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A

// C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm