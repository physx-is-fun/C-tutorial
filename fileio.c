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
    // Create and writing file
    // Relative path: test.txt
    FILE *pF = fopen("test.txt","w");
    fprintf(pF,"This is a sample text.");
    fclose(pF);
    */

    /*
    // Append to an existing file file
    FILE *pF = fopen("test.txt","a");
    fprintf(pF,"\nThis is another sample text.");
    fclose(pF);
    */

    /*
    // Deleting file
    if(remove("test.txt")==0){
        printf("That file was deleted succesfully!");
    } else {
        printf("That file was not deleted!");
    }
    */

    /*
    // Reading file
    FILE  *pF = fopen("poem.txt","r");
    char buffer[255];

    if(pF == NULL){
        printf("Unable open the file!\n");
    } else {
        while(fgets(buffer,255,pF) != NULL){
            printf("%s",buffer);
        }
    }
    fclose(pF);
    */
    
    return 0;
}

// C - File I/O. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_file_io.htm