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
    srand(time(0));
    int number1 = (rand()%6)+1;
    int number2 = (rand()%6)+1;
    int number3 = (rand()%6)+1;

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
    
    return 0;
}

// Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A