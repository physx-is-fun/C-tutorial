#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

int findMin(int array[], int size){
    int min = array[0];
    for(int i=0; i<size-1; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}

int main() {
    // Find minimum value of an array
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int min = findMin(array,size);
    printf("The minimum value of the array is: %d",min);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A