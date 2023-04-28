#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

int arraySum(int array[], int size){
    int sum = 0;
    for(int i=0; i<size-1; i++){
        sum = sum + array[i];
    }
    return sum;
}

int main() {
    // Find the sum of array of numbers
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = arraySum(array,size);
    printf("The sum of array of numbers: %d",sum);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A