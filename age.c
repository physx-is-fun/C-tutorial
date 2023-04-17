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
    int age;
    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("\nYou are signed up!");
    } else if(age == 0){
        printf("\nYou can't sign up! You were just born!"); 
    } else if(age < 0){
        printf("\nYou haven't been born yet!");
    } else {
        printf("\nYou are too young to sign up!");
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A