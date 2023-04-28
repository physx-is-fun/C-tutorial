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
    char questions[][100] = {"1. What year did the C language debut?",
                             "2. Who is created with creating C?",
                             "3. What is the predessor of C?"};
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};
    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuensions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    printf("QUIZ GAME\n");
    for(int i=0; i<numberOfQuensions; i++){
        printf("************************\n");
        printf("%s\n",questions[i]);
        printf("************************\n");
        for(int j=(i*4); j<(i*4)+4; j++){
            printf("%s\n", options[j]);
        }
        printf("Guess: ");
        scanf("%c",&guess);
        scanf(" %c"); // clear \n from input buffer
        guess = toupper(guess);
        printf("guess: %c, answer: %c\n",guess,answers[i]);
        if(guess == answers[i]){
            printf("CORRECT!\n");
            score++;
        } else{
            printf("WRONG!\n");
        }
    }
    printf("************************\n");
    printf("FINAL SCORE: %d/%d\n",score,numberOfQuensions);
    printf("************************\n");
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A