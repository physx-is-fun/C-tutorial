#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

enum Day{Mon=1,Tue=2,Wed=3,Thu=4,Fri=5,Sat=6,Sun=7};

int main() {
    enum Day today = Mon;
    //printf("%d",today);
    if(today == 6 || today == 7){
        printf("It's the weekend! Party time!");
    } else {
        printf("I have to work today.");
    }
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A