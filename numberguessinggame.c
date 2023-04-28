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
    const int MIN = 1;
    const int MAX = 100;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    // uses the current time as a seed
    srand(time(0));
    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;
    
    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess>answer){
            printf("Too high!\n");
        } else if(guess<answer){
            printf("Too low!\n");
        } else{
            printf("Correct!\n");
            
        }
        guesses++;
    }while(guess != answer);
    printf("*********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n",guesses);
    printf("*********************");
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A