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
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting );

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;
    // copy str1 into str3
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );
    // concatenates str1 and str2
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );
    // total lenghth of str1 after concatenation
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A