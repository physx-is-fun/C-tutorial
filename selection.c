#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

void selectionOfNumbers(int original[], int negative[], int positive[], int size){
    int negativeIndex = 0;
    int positiveIndex = 0;
    for(int i=0; i<size-1; i++){
        if(original[i] < 0){
            negative[negativeIndex] = original[i];
            negativeIndex++;
        } else {
            positive[positiveIndex] = original[i];
            positiveIndex++;
        }
    }
}

int main() {
    // Selection of positive and negative numbers
    int array[]={-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int negative[size];
    int positive[size];
    for(int i=0; i< size-1; i++){
        negative[i] = 0;
        positive[i] = 0;
    }
    selectionOfNumbers(array,negative,positive,size);
    printf("Negative numbers: ");
    for(int i=0; i< size-1; i++){
        printf("%d; ",negative[i]);
    }
    printf("\nPositive numbers: ");
    for(int i=0; i< size-1; i++){
        printf("%d; ",positive[i]);
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A