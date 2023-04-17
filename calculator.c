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

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c",&operator);

    printf("\nEnter number 1: ");
    scanf("%lf",&num1);

    printf("\nEnter number 2: ");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf",result);
            break;
            case '/':
            result = num1 / num2;
            printf("\nResult: %.2lf",result);
            break;
        default:
            printf("\n%c is not a valid operator!",operator);
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A