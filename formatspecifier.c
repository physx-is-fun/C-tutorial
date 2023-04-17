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
   
    char a = 127; // %d or %c
    signed char b = 127;
    unsigned char c = 255; // %d or %c
    short d = 32767; // %d
    signed short e = 32767; // hi 
    unsigned short f = 65535; // %hu
    int g = 32767; // %i or %d
    signed int h = 32767; // %i or %d
    unsigned int i = 4294967; // %u
    short int j = 32767; // %hi
    signed short int k = 32767; // %hi
    unsigned short int l = 65535; // %hu
    long int m = 2147483647; // %li
    signed long int n = 2147483647; // %li
    unsigned long int o = 4294967295; // %lu
    float p = 3.40282e+38; // %f
    double q = 1.79769e+308; // %lf
    long double r = 1.79769e+308; // %Lf

    printf("char: %d\n",a);
    printf("signed char: %d\n",b);
    printf("unsigned char: %d\n",c);
    printf("short: %d\n",d);
    printf("signed short: %d\n",e);
    printf("unsigned short: %hu\n",f);
    printf("int: %d\n",g);
    printf("signed int: %d\n",h);
    printf("unsigned int: %u\n",i);
    printf("short int: %hi\n",j);
    printf("signed short int: %hi\n",k);
    printf("unsigned short int: %hu\n",l);
    printf("long int: %li\n",m);
    printf("signed long int: %li\n",n);
    printf("unsigned long int: %lu\n",o);
    printf("float: %f\n",p);
    printf("double: %lf\n",q);
    printf("long double: %Lf\n",r);

    /*
    other format specifiers
        %.1 (decimal precision)
        %1 (minimum field width)
        %- (left align)
    */    

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n",item1);
    printf("Item 2: $%8.2f\n",item2);
    printf("Item 3: $%8.2f\n",item3);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A