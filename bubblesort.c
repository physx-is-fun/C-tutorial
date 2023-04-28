#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

void sort(int array[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i -1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for(int i=0; i<size-1; i++){
       printf("%d ",array[i]); 
    }
}

int main() {
    // Bubble sorting
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    printArray(array,size);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A