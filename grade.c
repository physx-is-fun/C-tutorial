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
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A' : 
            printf("Perfect!\n");
            break;
        case 'B' : 
            printf("You did good!\n");
            break;
        case 'C' : 
            printf("You did okay!\n");
            break;
        case 'D' : 
            printf("At least it's not an F!\n");
            break;
        case 'F' : 
            printf("You failed!\n");
            break;
        default:
            printf("Please enter only valid grades!");
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A