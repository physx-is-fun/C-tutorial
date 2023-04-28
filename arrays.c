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

    int size = 10;
    int n[ size ]; // n is an array of 10 integers
    int i,j;
    
    // initialize elements of array n to 0       
    for ( i = 0; i < size; i++ ) {
        n[ i ] = i + 100; // set element at location i to i + 100
    };
    
    // output each array element's value
    for (j = 0; j < size; j++ ) {
        printf("Element[%d] = %d\n", j, n[j] );
    };

    //int numbers[2][3]={{1,2,3},{4,5,6}}

    int rows =3;
    int columns = 3;
    int numbers[rows][columns];

    numbers[0][0]=1;
    numbers[0][1]=2;
    numbers[0][2]=3;
    numbers[1][0]=4;
    numbers[1][1]=5;
    numbers[1][2]=6;
    numbers[2][0]=7;
    numbers[2][1]=8;
    numbers[2][2]=9;

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }

    char cars[][10]={"Mustang","Corvette","Camaro"};
    //cars[0]="Tesla"
    strcpy(cars[0],"Tesla");

    for(int i=0; i< sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n",cars[i]);
    }

    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A