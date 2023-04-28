#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

#define TRUE  1
#define FALSE 0

int main() {
    Book book;
 
    strcpy( book.title, "C Programming");
    strcpy( book.author, "Nuha Ali"); 
    strcpy( book.subject, "C Programming Tutorial");
    book.book_id = 6495407;
    
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
    
    User user1 = {"John","password123",123456789};
    User user2 = {"Doe","password321",987654321};

    printf("%s\n",user1.name);
    printf("%s\n",user1.password);
    printf("%d\n",user1.id);
    printf("\n");
    printf("%s\n",user2.name);
    printf("%s\n",user2.password);
    printf("%d\n",user2.id);

    printf( "Value of TRUE : %d\n", TRUE);
    printf( "Value of FALSE : %d\n", FALSE);

    return 0;
}

// C - typedef. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_typedef.htm