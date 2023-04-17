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
    int a = 10, b = 20, c;
    c = (a < b) ? a : b;
    printf("%d", c);
    //Ternary operators can be nested just like if-else statements. Consider the following code:
    //int a = 1, b = 2, ans;
    //ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    //printf ("%d\n", ans);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A