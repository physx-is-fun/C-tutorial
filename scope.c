#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

/* global variable declaration */
int g;

int main() {
    // The following example shows how local variables are used. Here all the variables a, b, and c are local to main() function:
    int a, b;
    int c;
    // actual initialization
    a = 10;
    b = 20;
    c = a + b;
    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);
    
    // The following example shows how global variables are used.
    /* local variable declaration */
    //int a, b;
    /* actual initialization */
    //a = 10;
    //b = 20;
    //g = a + b;
    //printf ("value of a = %d, b = %d and g = %d\n", a, b, g);

    return 0;
}

// C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm