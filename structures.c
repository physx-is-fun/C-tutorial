#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;

// function declaration
void printBook( struct Books book ){
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
};

int main() {
    
    struct Books Book1;        // Declare Book1 of type Book
    struct Books Book2;        // Declare Book2 of type Book
    
    // book 1 specification
    strcpy( Book1.title, "C Programming");
    strcpy( Book1.author, "Nuha Ali"); 
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;

    // book 2 specification
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;
    
    // print Book1 info
    printBook( Book1 );

    // Print Book2 info
    printBook( Book2 );

    // print Book1 info by passing address of Book1
    // printBook( &Book1 );

    // print Book2 info by passing address of Book2
    // printBook( &Book2 );
    
    return 0;
}

// C - Structures. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_structures.htm