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
    /*
    for(int i = 1; i<=10; i++){
        printf("%d\n",i);
    }
    */

    /*
    char name[25];
    printf("\nWhat's your name?: ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    while(strlen(name)==0){
        printf("\nYou did not enter your name!");
        printf("\nWhat's your name?: ");
        fgets(name,25,stdin);
        name[strlen(name)-1]='\0';
    }
    printf("Hello %s",name);
    */

    /*
    int number = 0;
    int sum = 0;

    do{
       printf("Enter a # above 0: ");
       scanf("%d",&number);
       if(number>0){
           sum = sum + number;
       }
    }while(number>10);
    printf("sum: %d",sum);
    */

    /*
    int rows;
    int columns;
    char symbol;
    printf("\nEnter a # of rows: ");
    scanf("%d",&rows);
    printf("Enter a # of columns: ");
    scanf("%d",&columns);
    printf("Enter a symbol to use: ");
    scanf(" %c",&symbol); // clear \n from input buffer
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
    */

    /*
    for(int i=0; i<=20; i++){
        if(i==13){
            continue;    
        }
        printf("%d\n",i);
    }
    */

    /*
    for(int i=0; i<=20; i++){
        if(i==13){
            break;    
        }
        printf("%d\n",i);
    }
    */
    
    return 0;
}

// C - Loops. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_loops.htm