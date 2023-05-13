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
    
    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    } else {
        printf("\nThe weather is bad!");
    }

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    } else {
        printf("\nThe weather is good!");
    }

    if(!sunny){
        printf("\nIt's sunny outside!");
    } else {
        printf("\nIt's cloudy outside!");
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A