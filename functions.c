#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

void birthday(char name[],int age){
    printf("\nHappy birthday dear %s!",name);
    printf("\nYou are %d years old!",age);
};

// function declaration
double square(double x){
    // function body
    //local variable declaration
    double result =  x * x;
    // return statement
    return result;
};

int main() {
    
    char name[] = "John";
    int age = 25;
    birthday(name,age);

    double x = square(3.14);
    printf("%lf",x);

    double A = sqrt(9);
    double B = pow(2,4);
    int C = round(3.24); // lefelé kerekít
    int D = ceil(3.14); // mindig felfelé kerekít
    int E = floor(3.99); // mindig lefelé kerekít
    double F = abs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%lf\n",A);
    printf("%lf\n",B);
    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d\n",E);
    printf("%lf\n",F);
    printf("%lf\n",G);
    printf("%lf\n",H);
    printf("%lf\n",I);
    printf("%lf\n",J);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A