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
    int x = 5;
    int y = 2;

    int a = x + y;
    int b = x - y;
    int c = a * b;
    float d = x / (float) y;
    int e = x % y;
    int f = ++x;
    int g = --y;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%f\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);

    return 0;
}

// C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm