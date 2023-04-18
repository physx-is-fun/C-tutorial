#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>

// function prototype
void hello(char[],int); 

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

// global variable declaration
int g;

void printArray(int array[], int size){
    for(int i=0; i<size-1; i++){
       printf("%d ",array[i]); 
    }
}

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;

// function declaration
void printBook( struct Books book );

// function declaration (pointers to structures)
// void printBook( struct Books *book );

// typedef
/*
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
*/

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

#define TRUE  1
#define FALSE 0

struct Student {
    char name[12];
    float gpa;
};

enum Day{Mon=1,Tue=2,Wed=3,Thu=4,Fri=5,Sat=6,Sun=7};

extern int errno ;

unsigned long long int factorial(unsigned int i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int fibonacci(int i) {
   if(i == 0) {
      return 0;
   }
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

void sort(int array[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i -1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int findMax(int array[], int size){
    int max = array[0];
    for(int i=0; i<size-1; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

int findMin(int array[], int size){
    int min = array[0];
    for(int i=0; i<size-1; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}

int arraySum(int array[], int size){
    int sum = 0;
    for(int i=0; i<size-1; i++){
        sum = sum + array[i];
    }
    return sum;
}

void selectionOfNumbers(int original[], int negative[], int positive[], int size){
    int negativeIndex = 0;
    int positiveIndex = 0;
    for(int i=0; i<size-1; i++){
        if(original[i] < 0){
            negative[negativeIndex] = original[i];
            negativeIndex++;
        } else {
            positive[positiveIndex] = original[i];
            positiveIndex++;
        }
    }
}

int* positive;
int* negative;

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

int main(){

    /*
    Program structure: A C program basically consists of the following parts:
        * Preprocessor Commands
        * Functions
        * Variables
        * Statements & Expressions
        * Comments
    C - Program Structure. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_program_structure.htm
    Let us look at a simple code that would print the words "Hello World"

    #include <stdio.h>

    int main() {
    //my first program in C
    printf("Hello, World! \n");
    
    return 0;
    }

    Let us take a look at the various parts of the above program:
        * The first line of the program #include <stdio.h> is a preprocessor command, which tells a C compiler to include stdio.h file before going to actual compilation.
        * The next line int main() is the main function where the program execution begins.
        * The next line // will be ignored by the compiler and it has been put to add additional comments in the program. So such lines are called comments in the program.
        * The next line printf(...) is another function available in C which causes the message "Hello, World!" to be displayed on the screen.
        * The next line return 0; terminates the main() function and returns the value 0.
    C - Program Structure. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_program_structure.htm
    */

    /*
    basic syntax

    Tokens: A C program consists of various tokens and a token is either a keyword, an identifier, a constant, a string literal, or a symbol. For example, the following C statement consists of five tokens:
    printf("Hello, World! \n");
    The individual tokens are −
    printf
    (
    "Hello, World! \n"
    )
    ;
    C - Basic Syntax. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm

    Semicolons: In a C program, the semicolon is a statement terminator. That is, each individual statement must be ended with a semicolon. It indicates the end of one logical entity. Given below are two different statements:
    printf("Hello, World! \n");
    return 0;
    C - Basic Syntax. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm

    Comments: Comments are like helping text in your C program and they are ignored by the compiler. You cannot have comments within comments and they do not occur within a string or character literals.
    // this is a single line comment.
    */
    /*
        this
        is
        a multiline
        comment
    */

    /*
    printf("Hello World!\n");
    */
    // C - Basic Syntax. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm

    /*
    Identifiers: A C identifier is a name used to identify a variable, function, or any other user-defined item. An identifier starts with a letter A to Z, a to z, or an underscore '_' followed by zero or more letters, underscores, and digits (0 to 9). C does not allow punctuation characters such as @, $, and % within identifiers. C is a case-sensitive programming language. Thus, Manpower and manpower are two different identifiers in C. The following list shows the reserved words in C. These reserved words may not be used as constants or variables or any other identifier names:
        auto
        break
        case
        char
        const
        continue
        default
        do 
        double
        else
        enum
        extern
        float
        for
        goto
        if
        int
        long
        register
        return
        short
        signed
        sizeof
        static
        struct
        switch
        typedef
        union
        unsigned
        void
        volatile
        while
        _Packed
    C - Basic Syntax. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm

    Whitespace in C: A line containing only whitespace, possibly with a comment, is known as a blank line, and a C compiler totally ignores it. Whitespace is the term used in C to describe blanks, tabs, newline characters and comments. Whitespace separates one part of a statement from another and enables the compiler to identify where one element in a statement, such as int, ends and the next element begins. Therefore, in the following statement:
    int age;
    There must be at least one whitespace character (usually a space) between int and age for the compiler to be able to distinguish them. On the other hand, in the following statement:
    fruit = apples + oranges;   // get the total fruit
    No whitespace characters are necessary between fruit and =, or between = and apples, although you are free to include some if you wish to increase readability.
    C - Basic Syntax. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm
    */

    /*
    Data types: Data types in c refer to an extensive system used for declaring variables or functions of different types. The type of a variable determines how much space it occupies in storage and how the bit pattern stored is interpreted. The types in C can be classified as follows:
        * Basic types (They are arithmetic types and are further classified into: (a) integer types and (b) floating-point types.)
        * Enumerated types (They are again arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program.)
        * The type void (The type specifier void indicates that no value is available.)
        * Derived types (They include (a) Pointer types, (b) Array types, (c) Structure types, (d) Union types and (e) Function types.)
    The array types and structure types are referred collectively as the aggregate types. The type of a function specifies the type of the function's return value.
        char (1 byte; −128 to 127)
        signed char (1 byte; −128 to 127)
        unsigned char (1 byte; 0 to 255)
        short (2 byte; −32,768 to 32,767)
        signed short (2 byte; −32,768 to 32,767)
        unsigned short (2 byte; 0 to 65,535)
        int (2 byte; −32,768 to 32,767)
        signed int (2 byte; −32,768 to 32,767)
        unsigned int (2 byte; 0 to 65,535)
        short int (2 byte; −32,768 to 32,767)
        signed short int ( 2 byte; −32,768 to 32,767)
        unsigned short int (2 byte; 0 to 65,535)
        long int (4 byte; -2,147,483,648 to 2,147,483,647)
        signed long int (4 byte; -2,147,483,648 to 2,147,483,647)
        unsigned long int (4 byte; 0 to 4,294,967,295)
        float (4 byte; 1.17549e-38 to 3.40282e+38)
        double (8 byte; 2.22507e-308 to 1.79769e+308)
        long double (10 byte; 2.22507e-308 to 1.79769e+308)
    C - Data Types. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_data_types.htm
    */

    // % format specifier: Defines and formats a type of data to be displayed.

   /*
    char a = 127; // %d or %c
    signed char b = 127;
    unsigned char c = 255; // %d or %c
    short d = 32767; // %d
    signed short e = 32767; // hi 
    unsigned short f = 65535; // %hu
    int g = 32767; // %i or %d
    signed int h = 32767; // %i or %d
    unsigned int i = 4294967; // %u
    short int j = 32767; // %hi
    signed short int k = 32767; // %hi
    unsigned short int l = 65535; // %hu
    long int m = 2147483647; // %li
    signed long int n = 2147483647; // %li
    unsigned long int o = 4294967295; // %lu
    float p = 3.40282e+38; // %f
    double q = 1.79769e+308; // %lf
    long double r = 1.79769e+308; // %Lf

    printf("char: %d\n",a);
    printf("signed char: %d\n",b);
    printf("unsigned char: %d\n",c);
    printf("short: %d\n",d);
    printf("signed short: %d\n",e);
    printf("unsigned short: %hu\n",f);
    printf("int: %d\n",g);
    printf("signed int: %d\n",h);
    printf("unsigned int: %u\n",i);
    printf("short int: %hi\n",j);
    printf("signed short int: %hi\n",k);
    printf("unsigned short int: %hu\n",l);
    printf("long int: %li\n",m);
    printf("signed long int: %li\n",n);
    printf("unsigned long int: %lu\n",o);
    printf("float: %f\n",p);
    printf("double: %lf\n",q);
    printf("long double: %Lf\n",r);
    */

    /*
    other format specifiers
        %.1 (decimal precision)
        %1 (minimum field width)
        %- (left align)
    */    

    /*
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n",item1);
    printf("Item 2: $%8.2f\n",item2);
    printf("Item 3: $%8.2f\n",item3);
    */

    /*
    Variable: A variable is nothing but a name given to a storage area that our programs can manipulate. Each variable in C has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable. The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. Upper and lowercase letters are distinct because C is case-sensitive. C programming language also allows to define various other types of variables, which we will cover in subsequent chapters like Enumeration, Pointer, Array, Structure, Union, etc.
    variable definition: A variable definition tells the compiler where and how much storage to create for the variable. A variable definition specifies a data type and contains a list of one or more variables of that type as follows:
    type variable_list;
    Here, type must be a valid C data type including char, w_char, int, float, double, bool, or any user-defined object; and variable_list may consist of one or more identifier names separated by commas. Some valid declarations are shown here:
    int    i, j, k;
    char   c, ch;
    float  f, salary;
    double d;
    The line int i, j, k; declares and defines the variables i, j, and k; which instruct the compiler to create variables named i, j and k of type int. Variables can be initialized (assigned an initial value) in their declaration. The initializer consists of an equal sign followed by a constant expression as follows:
    type variable_name = value;
    Some examples are:
    int d = 3, f = 5; // declaration and initializing d and f.
    For definition without an initializer: variables with static storage duration are implicitly initialized with NULL (all bytes have the value 0); the initial value of all other variables are undefined.
    C - Variables. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_variables.htm
    */

    /*
    Constant: Constants refer to fixed values that the program may not alter during its execution. These fixed values are also called literals. Constants can be of any of the basic data types like an integer constant, a floating constant, a character constant, or a string literal. There are enumeration constants as well. Constants are treated just like regular variables except that their values cannot be modified after their definition.
    integer literals: An integer literal can be a decimal, octal, or hexadecimal constant. A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal. An integer literal can also have a suffix that is a combination of U and L, for unsigned and long, respectively. The suffix can be uppercase or lowercase and can be in any order. Here are some examples of integer literals:
    85         // decimal
    0213       // octal
    0x4b       // hexadecimal
    30         // int
    30u        // unsigned int
    30l        // long
    30ul       // unsigned long
    floating-point literals: A floating-point literal has an integer part, a decimal point, a fractional part, and an exponent part. You can represent floating point literals either in decimal form or exponential form. While representing decimal form, you must include the decimal point, the exponent, or both; and while representing exponential form, you must include the integer part, the fractional part, or both. The signed exponent is introduced by e or E. Here are some examples of floating-point literals:
    3.14159       // Legal
    314159E-5L    // Legal
    510E          // Illegal: incomplete exponent
    210f          // Illegal: no decimal or exponent
    .e55          // Illegal: missing integer or fraction
    Character constants: Character literals are enclosed in single quotes, e.g., 'x' can be stored in a simple variable of char type. A character literal can be a plain character (e.g., 'x'), an escape sequence (e.g., '\t'), or a universal character (e.g., '\u02C0'). There are certain characters in C that represent special meaning when preceded by a backslash (as escape sequences). Escape sequences are character combination consisting of a backslash \ followed by a letter or combination of digits. They specify actions within a line or string of texts:
        \a (alert)
        \b (backspace)
        \e (escape)
        \f (formfeed page break)
        \n (newline)
        \r (carriage return)
        \t (horizontal tab)
        \v (vertical tab)
        \\ (backslash)
        \' (single quotation mark)
        \" (double quotation mark)
        \? (question mark)
        \nnn (The byte whose numerical value is given by nnn interpreted as an octal number.)
        \xhh… (The byte whose numerical value is given by hh… interpreted as a hexadecimal number
        \uhhhh (Unicode code point below 10000 hexadecimal.)
        \Uhhhhhhhh (Unicode code point where h is a hexadecimal digit.)
    string literals: String literals or constants are enclosed in double quotes "". A string contains characters that are similar to character literals: plain characters, escape sequences, and universal characters. You can break a long line into multiple lines using string literals and separating them using white spaces. Here are some examples of string literals. All the three forms are identical strings:
    "hello, dear"
    "hello, \
    dear"
    "hello, " "d" "ear"
    The const keyword: You can use const prefix to declare constants with a specific type as follows:
    const type variable = value;
    The following example explains it in detail:
    const int LENGTH = 10;
    Note that it is a good programming practice to define constants in CAPITALS.
    C - Constants and Literals. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_constants.htm
    */

    /*
    Operators: An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators:
        * Arithmetic Operators
        * Relational Operators
        * Logical Operators
        * Bitwise Operators
        * Assignment Operators
        * Misc Operators
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */
    
    /*
    Arithmetic operators: An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).
        + (Adds two operands.)
        - (Subtracts second operand from the first.)
        * (Multiplies both operands.)
        / (Divides numerator by de-numerator.)
        % (Modulus Operator and remainder of after an integer)
        ++ (Increment operator increases the integer value by one.)
        -- (Decrement operator decreases the integer value by one.)
    */

    /*
    int x = 5;
    int y = 2;

    int a = x + y;
    int b = x - y;
    int c = a * b;
    float d = x / (float) y;
    int e = x % y;
    int f = ++x;
    int g = --y;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%f\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */

    /*
    Relational operators: A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.
        == (Checks if the values of two operands are equal or not. If yes, then the condition becomes true.)
        > (Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.)
        < (Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.)
        != (Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.)
        >= (Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.)
        <= (Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.) 
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */

    /*
    Bitwise operators: During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.
        & (Bitwise AND)
        | (Bitwise OR)
        ^ (Bitwise exclusive OR)
        ~ (Bitwise complement)
        << (Shift left)
        >> (Shift right)
    */

    /*
    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000
    z = x & y; // 4 = 00000100
    z = x | y; // 14 = 00001110
    int z = x ^ y; // 10 = 00001010
    z = x << 1; // 12 = 00001100
    z = x >> 1; // 3 = 00000011
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */
    
    // Assigment operators: Used to replace a statement where an operator takes a variable as one of its arguments and assigns the result back to the same variable. Examlple: x = x + 1; => x + = 1;
    //int x = 10;

    // x = x + 2;
    // x + = 2; // not working

    // x = x - 3;
    // x - = 3; // not working

    // x = x * 4;
    // x * = 4; // not working

    //  x = x / 5;
    // x / = 5; // not working

    // x = x % 2;
    // x % = 2; // not working

    //printf("%d",x);
    // C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm

    // standard inputs and outputs
    /*
    int age;
    char name[25]; // bytes

    printf("\nWhat's your name?");
    //scanf("%s",&name); // space nélküli sztringet tud beolvasni
    fgets(name,25,stdin); // space-el rendelkező sztringet is be tud olvasni
    name[strlen(name)-1] = '\0'; // 1 sorba írja ki a kiírandó sztringet

    printf("\nHow old are you?");
    scanf("%d",&age);

    printf("\nHello %s, how are you?",name);
    printf("\nYou are %d years old.",age);
    */

    /*
    // circumference and area calculation
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("\nEnter the radius of a circle: ");
    scanf("%lf",&radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\nCircumference: %lf",circumference);
    printf("\nArea: %lf",area);
    */

    /*
    // right angled triangle
    double A;
    double B;
    double C;

    printf("\nEnter side A: ");
    scanf("%lf",&A);
    printf("\nEnter side B: ");
    scanf("%lf",&B);

    C = sqrt(A * A + B * B);

    printf("\nSide C: %lf",C);
    */
    
    /*
    Decision making: Decision making structures require that the programmer specifies one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false. C programming language assumes any non-zero and non-null values as true, and if it is either zero or null, then it is assumed as false value. C programming language provides the following types of decision making statements.
        if statement (An if statement consists of a boolean expression followed by one or more statements.)
        if...else statement (An if statement can be followed by an optional else statement, which executes when the Boolean expression is false.)
        nested if statements (You can use one if or else if statement inside another if or else if statement(s).)
        switch statement (A switch statement allows a variable to be tested for equality against a list of values.)
        nested switch statements (You can use one switch statement inside another switch statement(s).) 
    C - Decision Making. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_decision_making.htm
    */    

    /*
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
    */

    /*
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A' : 
            printf("Perfect!\n");
            break;
        case 'B' : 
            printf("You did good!\n");
            break;
        case 'C' : 
            printf("You did okay!\n");
            break;
        case 'D' : 
            printf("At least it's not an F!\n");
            break;
        case 'F' : 
            printf("You failed!\n");
            break;
        default:
            printf("Please enter only valid grades!");
    }
    */

    /*
    // Temperature conversion calculation
    char unit;
    float temp;

    printf("\nIs the temperature is in (F) or (C)?: ");
    scanf("%c",&unit);
    unit = toupper(unit); // a bemeneti karaktert nagybetűssé változtatjuk

    if(unit == 'C'){
        printf("\nEnter the temperature is Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farenheit is: %.1f °F",temp);
    } else if(unit == 'F'){
        printf("\nEnter the temperature is Farenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is: %.1f °C",temp);
    } else {
        printf("\n%c is not a valid unit of measurement!",unit);
    }
    */
    
    /*
    // Calculator program

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
    */

    /*
    Logical operators: An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.
        && (Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.)
        || (Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.)
        ! (Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false.)
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */

    /*
    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    } else {
        printf("\nThe weather is bad!");
    }

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    } else {
        printf("\nThe weather is good!");
    }

    if(!sunny){
        printf("\nIt's sunny outside!");
    } else {
        printf("\nIt's cloudy outside!");
    }
    */
    
    /*
    Misc operators: Besides the operators discussed above, there are a few other important operators including sizeof and ? : supported by the C Language.
        sizeof()	(Returns the size of a variable.)
        & (Returns the address of a variable.)
        * (Pointer to a variable.)
        ? : (Conditional Expression.)
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */

    /*
    Ternary operator: Programmers use the ternary operator for decision making in place of longer if and else conditional statements. The ternary operator take three arguments:
        * The first is a comparison argument.
        * The second is the result upon a true comparison.
        * The third is the result upon a false comparison.
    syntax:
    condition ? value_if_true : value_if_false
    The statement evaluates to value_if_true if condition is met, and value_if_false otherwise. Here’s the above example rewritten to use the ternary operator:
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */
   /*
    int a = 10, b = 20, c;
    c = (a < b) ? a : b;
    printf("%d", c);
    //Ternary operators can be nested just like if-else statements. Consider the following code:
    int a = 1, b = 2, ans;
    ans = (a == 1 ? (b == 2 ? 3 : 5) : 0);
    printf ("%d\n", ans);
    */

    /*
    Operators precedence: Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others. Here, operators with the highest precedence appear at the top of the table, those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.
        () [] -> . ++ - - (Postfix)
        + - ! ~ ++ - - (type)* & sizeof (Unary)
        * / % (Multiplicative)
        + - (Additive)
        << >> (Shift)
        < <= > >= (Relational)
        == != (Equality)
        & (Bitwise AND)
        ^ (Bitwise XOR)
        | (Bitwise OR)
        && (Logical AND)
        || (Logical OR)
        ? : (Conditional)
        = += -= *= /= %=>>= <<= &= ^= |= (Assigment)
    C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm
    */ 

    /*
    Functions: A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions. You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task. A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function. The C standard library provides numerous built-in functions that your program can call. For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions. A function can also be referred as a method or a sub-routine or a procedure, etc.
    defining a function: The general form of a function definition in C programming language is as follows:
    return_type function_name( parameter list ) {
        body of the function
    }
    A function definition in C programming consists of a function header and a function body. Here are all the parts of a function:
        * Return Type (A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.)
        * Function Name (This is the actual name of the function. The function name and the parameter list together constitute the function signature.)
        * Parameters (A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.)
        * Function Body (The function body contains a collection of statements that define what the function does.)
    Function declarations: A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately. A function declaration has the following parts:
    return_type function_name( parameter list );
    Parameter names are not important in function declaration only their type is required.
    Function declaration is required when you define a function in one source file and you call that function in another file. In such case, you should declare the function at the top of the file calling the function.
    Calling a function: While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task. When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program. To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.
    Function arguments: If a function is to use arguments, it must declare variables that accept the values of the arguments. These variables are called the formal parameters of the function. Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit. While calling a function, there are two ways in which arguments can be passed to a function:
        * Call by value (This method copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.)
        * Call by reference (This method copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.)
    By default, C uses call by value to pass arguments. In general, it means the code within a function cannot alter the arguments used to call the function.  
    C - Functions. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_functions.htm
    */ 
    /*
    char name[] = "John";
    int age = 25;
    birthday(name,age);
    */

    /*
    double x = square(3.14);
    printf("%lf",x);
    */

    /*
    Function prototype: A function declaration, without the body, before the main(). It ensures that calls to a function are made with the correct arguments. Many C compilers do not check for parameter matching. Missing arguments will result in unexpected behavior. A function prototype causes the compiler to flag an error if arguments are missing.The main advantages are:
        * Easier to navigate a program without main() at the top.
        * Helps with debugging.
        * Commonly used in header files. 
    */

    /*
    char name[] = "John";
    int age = 25;
    hello(name,age)
    */

    /*
    Math functions: There is also a list of math functions available, that allows you to perform mathematical tasks on numbers. To use them, you must include the math.h header file in your program.
        ceil(number) (This function returns nearest integer value which is greater than or equal to the argument passed to this function.)
        floor(number) (This function returns the nearest integer which is less than or equal to the argument passed to this function.)   
        round(number) (This function returns the nearest integer value of the float/double/long double argument passed to this function. If decimal value is from “.1 to .5”, it returns integer value less than the argument. If decimal value is from “.6 to .9”, it returns the integer value greater than the argument.)
        sqrt(number) (To find the square root of a number, use the sqrt() function.)
        abs(number) (This function returns the absolute value of an integer. The absolute value of a number is always positive. Only integer values are supported in C.)
        sin(number) (This function is used to calculate sine value.)
        cos(number) (This function is used to calculate cosine.)
        cosh(This function is used to calculate hyperbolic cosine.)
        exp(number) (This function is used to calculate the exponential “e” to the xth power.)
        tan(number) (This function is used to calculate tangent.)
        tanh(number) (This function is used to calculate hyperbolic tangent.)
        sinh(number) (This function is used to calculate hyperbolic sine.)
        log(number) (This function is used to calculates natural logarithm.)
        log10(number) (This function is used to calculates base 10 logarithm.)
        pow(number1,number2) (This is used to find the power of the given number.)
        trunc(number) (This function truncates the decimal value from floating point value and returns integer value.)
    C Math Functions. (2022, February 21). W3schools. Retrieved April 16, 2023, from https://www.w3schools.com/c/c_math.php
    */

    /*
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
    */

    /*
    Strings: Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null. The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    If you follow the rule of array initialization then you can write the above statement as follows:
    char greeting[] = "Hello";
    Actually, you do not place the null character at the end of a string constant. The C compiler automatically places the '\0' at the end of the string when it initializes the array. Let us try to print the above mentioned string.
    C - Strings. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_strings.htm
    */

    /*
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting );
    */

    /*
    C supports a wide range of functions that manipulate null-terminated strings
        strcpy(s1, s2) (Copies string s2 into string s1.)
        strcat(s1, s2) (Concatenates string s2 onto the end of string s1.)
        strlen(s1) (Returns the length of string s1.)
        strcmp(s1, s2) (Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.)
        strchr(s1, ch) (Returns a pointer to the first occurrence of character ch in string s1.)
        strstr(s1, s2) (Returns a pointer to the first occurrence of string s2 in string s1.)
    */

    /*
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;
    // copy str1 into str3
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );
    // concatenates str1 and str2
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );
    // total lenghth of str1 after concatenation
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );
    */

    /*
    Scope rules: A scope in any programming is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed. There are three places where variables can be declared in C programming language:
        * Inside a function or a block which is called local variables.
        * Outside of all functions which is called global variables.
        * In the definition of function parameters which are called formal parameters.
    Local variables: Variables that are declared inside a function or block are called local variables. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own. The following example shows how local variables are used. Here all the variables a, b, and c are local to main() function:
    C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm
    */

    /*
    int a, b;
    int c;
    // actual initialization
    a = 10;
    b = 20;
    c = a + b;
    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);
    */

    // Global variables: Global variables are defined outside a function, usually on top of the program. Global variables hold their values throughout the lifetime of your program and they can be accessed inside any of the functions defined for the program. A global variable can be accessed by any function. That is, a global variable is available for use throughout your entire program after its declaration. The following program show how global variables are used in a program:
    // C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm

    /*
    // local variable declaration
    int a, b;
    // actual initialization
    a = 10;
    b = 20;
    g = a + b;
    printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
    */

    // A program can have same name for local and global variables but the value of local variable inside a function will take preference. Here is an example:
    // C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm

    /*
    // local variable declaration
    int g = 10;
    printf ("value of g = %d\n",  g);
    */

    // Formal parameters: Formal parameters, are treated as local variables with-in a function and they take precedence over global variables. Following is an example:
    /*
    // local variable declaration in main function
    int a = 10;
    int b = 20;
    int c = 0;

    printf ("value of a in main() = %d\n",  a);
    c = sum( a, b);
    printf ("value of c in main() = %d\n",  c);
    */

    /*
    Initializing local and global variables: When a local variable is defined, it is not initialized by the system, you must initialize it yourself. Global variables are initialized automatically by the system when you define them as follows:
        int (0)
        char ('\0')
        float (0)
        double (0)
        pointer (NULL)
    It is a good programming practice to initialize variables properly, otherwise your program may produce unexpected results, because uninitialized variables will take some garbage value already available at their memory location.
    C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm
    */

    /*
    Loops: You may encounter situations, when a block of code needs to be executed several number of times. In general, statements are executed sequentially: The first statement in a function is executed first, followed by the second, and so on. Programming languages provide various control structures that allow for more complicated execution paths. A loop statement allows us to execute a statement or group of statements multiple times. C programming language provides the following types of loops to handle looping requirements:
        * while loop (Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.)
        * for loop (Executes a sequence of statements multiple times and abbreviates the code that manages the loop variable.)
        * do...while loop (It is more like a while statement, except that it tests the condition at the end of the loop body.)
        * nested loops (You can use one or more loops inside any other while, for, or do..while loop.)
    Loop control statements: Loop control statements change execution from its normal sequence. When execution leaves a scope, all automatic objects that were created in that scope are destroyed. C supports the following control statements:
        * break statement (Terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch.)
        * continue statement (Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating.)
        * goto statement (Transfers control to the labeled statement.)
    the infinite loop: A loop becomes an infinite loop if a condition never becomes false. The for loop is traditionally used for this purpose. Since none of the three expressions that form the 'for' loop are required, you can make an endless loop by leaving the conditional expression empty.
    for( ; ; ) {
      printf("This loop will run forever.\n");
    }
    When the conditional expression is absent, it is assumed to be true. You may have an initialization and increment expression, but C programmers more commonly use the for(;;) construct to signify an infinite loop. You can terminate an infinite loop by pressing Ctrl + C keys. 
    C - Loops. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_loops.htm
    */

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

    /*
    Arrays: Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type. Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.
    declaring arrays: To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows:
    type arrayName [ arraySize ];
    This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement:
    double balance[10];
    Here balance is a variable array which is sufficient to hold up to 10 double numbers.
    Initializing arrays: You can initialize an array in C either one by one or using a single statement as follows:
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ]. If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write:
    double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    You will create exactly the same array as you did in the previous example. Following is an example to assign a single element of the array:
    balance[4] = 50.0;
    The above statement assigns the 5th element in the array with a value of 50.0. All arrays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1.
    accessing array elements: An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example:
    double salary = balance[9];
    The above statement will take the 10th element from the array and assign the value to salary variable.
    Arrays in detail: Arrays are important to C and should need a lot more attention. The following important concepts related to array should be clear to a C programmer:
        * multi-dimensional arrays (C supports multidimensional arrays. The simplest form of the multidimensional array is the two-dimensional array.)
        * passing arrays to functions (You can pass to the function a pointer to an array by specifying the array's name without an index.)
        * return array from a function (C allows a function to return an array.)
        * pointer to an array: (You can generate a pointer to the first element of an array by simply specifying the array name, without any index.)
    C - Arrays. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_arrays.htm
    */

    /*
    int size = 10;
    int n[ size ]; // n is an array of 10 integers
    int i,j;
    
    // initialize elements of array n to 0       
    for ( i = 0; i < size; i++ ) {
        n[ i ] = i + 100; // set element at location i to i + 100
    };
    
    // output each array element's value
    for (j = 0; j < size; j++ ) {
        printf("Element[%d] = %d\n", j, n[j] );
    };
    */

    //int numbers[2][3]={{1,2,3},{4,5,6}}

    /*
    int rows =3;
    int columns = 3;
    int numbers[rows][columns];

    numbers[0][0]=1;
    numbers[0][1]=2;
    numbers[0][2]=3;
    numbers[1][0]=4;
    numbers[1][1]=5;
    numbers[1][2]=6;
    numbers[2][0]=7;
    numbers[2][1]=8;
    numbers[2][2]=9;

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }
    */

    /*
    char cars[][10]={"Mustang","Corvette","Camaro"};
    //cars[0]="Tesla"
    strcpy(cars[0],"Tesla");

    for(int i=0; i< sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n",cars[i]);
    }
    */

    // Swap values of two variables
    /*
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x=y;
    y=temp;

    printf("x = %c\n",x);
    printf("y = %c\n",y);
    */
    /*
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n",x);
    printf("y = %s\n",y);
    */

    /*
    Structures: Arrays allow to define type of variables that can hold several data items of the same kind. Similarly structure is another user defined data type available in C that allows to combine data items of different kinds. Structures are used to represent a record. Suppose you want to keep track of your books in a library. You might want to track the following attributes about each book:
        * title
        * author
        * subject
        * book ID
    Defining a structure: To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member. The format of the struct statement is as follows:
    struct [structure tag] {
        member definition;
        member definition;
        ...
        member definition;
    } [one or more structure variables];
    The structure tag is optional and each member definition is a normal variable definition, such as int i; or float f; or any other valid variable definition. At the end of the structure's definition, before the final semicolon, you can specify one or more structure variables but it is optional. Here is the way you would declare the Book structure:
    struct Books {
        char  title[50];
        char  author[50];
        char  subject[100];
        int   book_id;
    } book; 
    Accessing structure members: To access any member of a structure, we use the member access operator (.). The member access operator is coded as a period between the structure variable name and the structure member that we wish to access. You would use the keyword struct to define variables of structure type.
    Structures as function arguments: You can pass a structure as a function argument in the same way as you pass any other variable or pointer:
    Pointers to structures: You can define pointers to structures in the same way as you define pointer to any other variable:
    struct Books *struct_pointer;
    Now, you can store the address of a structure variable in the above defined pointer variable. To find the address of a structure variable, place the '&'; operator before the structure's name as follows:
    struct_pointer = &Book1;
    To access the members of a structure using a pointer to that structure, you must use the → operator as follows:
    struct_pointer->title;
    */

    /*
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
    */

    /*
    typedef: The C programming language provides a keyword called typedef, which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers:
    typedef unsigned char BYTE;
    After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char, for example:
    BYTE  b1, b2;
    By convention, uppercase letters are used for these definitions to remind the user that the type name is really a symbolic abbreviation, but you can use lowercase, as follows:
    typedef unsigned char byte;
    You can use typedef to give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly as follows:   
    C - typedef. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_typedef.htm
    */

    /*
    Book book;
 
    strcpy( book.title, "C Programming");
    strcpy( book.author, "Nuha Ali"); 
    strcpy( book.subject, "C Programming Tutorial");
    book.book_id = 6495407;
    
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf( "Book book_id : %d\n", book.book_id);
    */

    /*
    User user1 = {"Balazs","password123",123456789};
    User user2 = {"Bela","password321",987654321};

    printf("%s\n",user1.name);
    printf("%s\n",user1.password);
    printf("%d\n",user1.id);
    printf("\n");
    printf("%s\n",user2.name);
    printf("%s\n",user2.password);
    printf("%d\n",user2.id);
    */

    /*
    typedef vs #define: #define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences:
        * typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
        * typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.
    C - typedef. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_typedef.htm
    */

    // Array of structures
    /*
    struct Student student1 = {"Spongebob",3.0};
    struct Student student2 = {"Patrick",2.5};
    struct Student student3 = {"Sandy",4.0};
    struct Student student4 = {"Squidward",2.0};

    struct Student students[] = {student1,student2,student3,student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%-12s\t",students[i].name);
        printf("%.2f\n",students[i].gpa);
    }
    */

    /*
    printf( "Value of TRUE : %d\n", TRUE);
    printf( "Value of FALSE : %d\n", FALSE);
    */

    // enum: A user defined type of named integer identifiers. It helps to make a program more readable. Enums are NOT STRINGS, but they can be treated as int.
    // User defined Data Types in C++. (2018, October 22). Tutorials Point. Retrieved April 16, 2023, from https://www.geeksforgeeks.org/user-defined-data-types-in-c/
    /*
    enum Day today = Mon;
    //printf("%d",today);
    if(today == 6 || today == 7){
        printf("It's the weekend! Party time!");
    } else {
        printf("I have to work today.");
    }
    */

    // Pseudo random numbers: A set of values or elements that are statistically random. Don't use these for any sort of cryptographic security.
    /*
    srand(time(0));
    int number1 = (rand()%6)+1;
    int number2 = (rand()%6)+1;
    int number3 = (rand()%6)+1;

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
    */

    // Number guessing game;

    /*
    const int MIN = 1;
    const int MAX = 100;
    int guess = 0;
    int guesses = 0;
    int answer = 0;

    // uses the current time as a seed
    srand(time(0));
    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;
    
    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess>answer){
            printf("Too high!\n");
        } else if(guess<answer){
            printf("Too low!\n");
        } else{
            printf("Correct!\n");
            
        }
        guesses++;
    }while(guess != answer);
    printf("*********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n",guesses);
    printf("*********************");
    */

    // Quiz game
    /*
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
    */

    /*
    Pointers: Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers, and other tasks, such as dynamic memory allocation, cannot be performed without using pointers. So it becomes necessary to learn pointers to become a perfect C programmer. Let's start learning them in simple and easy steps. As you know, every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator, which denotes an address in memory. Consider the following example, which prints the address of the variables defined: 
    C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    */

    /*
    int  var1;
    char var2[10];

    printf("Address of var1 variable: %x\n", &var1  );
    printf("Address of var2 variable: %x\n", &var2  );
    */

    /*
    What are pointers? : A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is:   
    type *var-name;
    Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations:
    int    *ip;    // pointer to an integer
    double *dp;    // pointer to a double
    float  *fp;    // pointer to a float
    char   *ch     // pointer to a character
    The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.
    How to use pointers? : There are a few important operations, which we will do with the help of pointers very frequently. (a) We define a pointer variable, (b) assign the address of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. The following example makes use of these operations:
    C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    */

    /*
    int  var = 20;   // actual variable declaration
    int  *ip;        // pointer variable declaration

    ip = &var;  // store address of var in pointer variable

    printf("Address of var variable: %x\n", &var  );

    // address stored in pointer variable
    printf("Address stored in ip variable: %x\n", ip );

    // access the value using the pointer
    printf("Value of *ip variable: %d\n", *ip );
    */

    /*
    NULL pointers: It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer. The NULL pointer is a constant with a value of zero defined in several standard libraries. Consider the following program: 
    C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    */

    /*
    int  *ptr = NULL;

    printf("The value of ptr is : %x\n", ptr  );
    */

    /*
    Input and output: When we say Input, it means to feed some data into a program. An input can be given in the form of a file or from the command line. C programming provides a set of built-in functions to read the given input and feed it to the program as per requirement. When we say Output, it means to display some data on screen, printer, or in any file. C programming provides a set of built-in functions to output the data on the computer screen as well as to save it in text or binary files.
    the standard files: C programming treats all the devices as files. So devices such as the display are addressed in the same way as files and the following three files are automatically opened when a program executes to provide access to the keyboard and screen:
        * Standard input (File pointer: stdin; Device: keyboard)
        * Standard output (File pointer: stdout; Device: Screen)
        * Standard error (File pointer: stderr; Device: your screen)
    The file pointers are the means to access the file for reading and writing purpose. This section explains how to read values fom the screen and how to print the result on the screen.
    The getchar() and putchar() functions: The int getchar(void) function reads the next available character from the screen and returns it as an integer. This function reads only single character at a time. You can use this method in the loop in case you want to read more than one character from the screen. The int putchar(int c) function puts the passed character on the screen and returns the same character. This function puts only single character at a time. You can use this method in the loop in case you want to display more than one character on the screen. Check the following example: 
    C - Input and Output. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_input_output.htm
    */

    /*
    int c;

    printf( "Enter a value :");
    c = getchar( );

    printf( "\nYou entered: ");
    putchar( c );
    */

    /*
    The gets() and puts() functions: The char *gets(char *s) function reads a line from stdin into the buffer pointed to by s until either a terminating newline or EOF (End of File). The int puts(const char *s) function writes the string 's' and 'a' trailing newline to stdout. NOTE: Though it has been deprecated to use gets() function, Instead of using gets, you want to use fgets():   
    C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    */

    /*
    char str[100];

    printf( "Enter a value :");
    gets( str );

    printf( "\nYou entered: ");
    puts( str );
    */

    /*
    The scanf() and printf() functions: The int scanf(const char *format, ...) function reads the input from the standard input stream stdin and scans that input according to the format provided. The int printf(const char *format, ...) function writes the output to the standard output stream stdout and produces the output according to the format provided. The format can be a simple constant string, but you can specify %s, %d, %c, %f, etc., to print or read strings, integer, character or float respectively. There are many other formatting options available which can be used based on requirements. Let us now proceed with a simple example to understand the concepts better. It should be noted that scanf() expects input in the same format as you provided %s and %d, which means you have to provide valid inputs like "string integer". If you provide "string string" or "integer integer", then it will be assumed as wrong input. Secondly, while reading a string, scanf() stops reading as soon as it encounters a space, so "this is test" are three strings for scanf():    
    C - Pointers. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    */

    /*
    char str[100];
    int i;

    printf( "Enter a value :");
    scanf("%s %d", str, &i);

    printf( "\nYou entered: %s %d ", str, i);
    */

    /*
    File I/O: A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through the important calls for file management.
    Opening files: You can use the fopen( ) function to create a new file or to open an existing file. This call will initialize an object of the type FILE, which contains all the information necessary to control the stream. The prototype of this function call is as follows:
    FILE *fopen( const char * filename, const char * mode );
    Here, filename is a string literal, which you will use to name your file, and access mode can have one of the following values:
        * r (Opens an existing text file for reading purpose.)
        * w (Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.)
        * a (Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.)
        * r+ (Opens a text file for both reading and writing.)
        * w+ (Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.)
        * a+ (Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.)
    If you are going to handle binary files, then you will use following access modes instead of the above mentioned ones:
        "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
    Closing a file: To close a file, use the fclose( ) function. The prototype of this function is:
    int fclose( FILE *fp );
    The fclose(-) function returns zero on success, or EOF if there is an error in closing the file. This function actually flushes any data still pending in the buffer to the file, closes the file, and releases any memory used for the file. The EOF is a constant defined in the header file stdio.h. There are various functions provided by C standard library to read and write a file, character by character, or in the form of a fixed length string.
    Writing a file: Following is the simplest function to write individual characters to a stream:
    int fputc( int c, FILE *fp );
    The function fputc() writes the character value of the argument c to the output stream referenced by fp. It returns the written character written on success otherwise EOF if there is an error. You can use the following functions to write a null-terminated string to a stream:
    int fputs( const char *s, FILE *fp );
    The function fputs() writes the string s to the output stream referenced by fp. It returns a non-negative value on success, otherwise EOF is returned in case of any error. You can use int fprintf(FILE *fp,const char *format, ...) function as well to write a string into a file.
    Reading a file: Given below is the simplest function to read a single character from a file:
    int fgetc( FILE * fp );
    The fgetc() function reads a character from the input file referenced by fp. The return value is the character read, or in case of any error, it returns EOF. The following function allows to read a string from a stream:
    char *fgets( char *buf, int n, FILE *fp );
    The functions fgets() reads up to n-1 characters from the input stream referenced by fp. It copies the read string into the buffer buf, appending a null character to terminate the string. If this function encounters a newline character '\n' or the end of the file EOF before they have read the maximum number of characters, then it returns only the characters read up to that point including the new line character. You can also use int fscanf(FILE *fp, const char *format, ...) function to read strings from a file, but it stops reading after encountering the first space character.
    Binary I/O functions: There are two functions, that can be used for binary input and output:
    size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);        
    size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);   
    Both of these functions should be used to read or write blocks of memories - usually arrays or structures.
    C - File I/O. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_file_io.htm
    */

    /*
    // Create and writing file
    // Relative path: test.txt
    // Absolute path: C:\\Users\\balazstari\\OneDrive - Dunakontroll Kft\\Asztal\\C\\test.txt"
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

    /*
    Error handling: As such, C programming does not provide direct support for error handling but being a system programming language, it provides you access at lower level in the form of return values. Most of the C or even Unix function calls return -1 or NULL in case of any error and set an error code errno. It is set as a global variable and indicates an error occurred during any function call. You can find various error codes defined in <error.h> header file. So a C programmer can check the returned values and can take appropriate action depending on the return value. It is a good practice, to set errno to 0 at the time of initializing a program. A value of 0 indicates that there is no error in the program.
    errno, perror(). and strerror(): The C programming language provides perror() and strerror() functions which can be used to display the text message associated with errno:
        * The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.
        * The strerror() function, which returns a pointer to the textual representation of the current errno value.
    Let's try to simulate an error condition and try to open a file which does not exist. Here I'm using both the functions to show the usage, but you can use one or more ways of printing your errors. Second important point to note is that you should use stderr file stream to output all the errors:     
    C - Error Handling. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
    */

    /*
    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
    } else {
        fclose (pf);
    }
    */

    /*
    Divide by zero errors: It is a common problem that at the time of dividing any number, programmers do not check if a divisor is zero and finally it creates a runtime error. The code below fixes this by checking if the divisor is zero before dividing:   
    C - Error Handling. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
    */

    /*
    int dividend = 20;
    int divisor = 0;
    int quotient;
    if( divisor == 0){
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient );
    exit(0); 
    */

    /*
    Proram exit status: It is a common practice to exit with a value of EXIT_SUCCESS in case of program coming out after a successful operation. Here, EXIT_SUCCESS is a macro and it is defined as 0. If you have an error condition in your program and you are coming out then you should exit with a status EXIT_FAILURE which is defined as -1. So let's write above program as follows:  
    C - Error Handling. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
    */

    /*
    int dividend = 20;
    int divisor = 5;
    int quotient;
    if( divisor == 0) {
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);
    }  
    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient );
    exit(EXIT_SUCCESS);
    */

    /*
    Recursion: Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function. The C programming language supports recursion, i.e., a function to call itself. But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop. Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.
    Number factorial: The following example calculates the factorial of a given number using a recursive function: 
    */

    /*
    int i = 12;
    printf("Factorial of %d is %d\n", i, factorial(i));
    */

    /*
    Fibonacci series: The following example generates the Fibonacci series for a given number using a recursive function:
    */

    /*
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\t\n", fibonacci(i));
    }
    */

    /*
    // Bubble sorting
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    printArray(array,size);
    */

    /*
    // Find maximum value of an array
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int max = findMax(array,size);
    printf("The maximum value of the array is: %d",max);
    */

    /*
    // Find minimum value of an array
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int min = findMin(array,size);
    printf("The minimum value of the array is: %d",min);
    */

    /*
    // Find the sum of array of numbers
    int array[]={9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = arraySum(array,size);
    printf("The sum of array of numbers: %d",sum);
    */

    /*
    // Selection of positive and negative numbers without dynamic memory allocation
    int array[]={-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int negative[size];
    int positive[size];
    for(int i=0; i< size-1; i++){
        negative[i] = 0;
        positive[i] = 0;
    }
    selectionOfNumbers(array,negative,positive,size);
    printf("Negative numbers: ");
    for(int i=0; i< size-1; i++){
        printf("%d; ",negative[i]);
    }
    printf("\nPositive numbers: ");
    for(int i=0; i< size-1; i++){
        printf("%d; ",positive[i]);
    }
    */

    /*
    // Selection of positive and negative numbers with dynamic memory allocation
    int array[]={-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    positive = calloc(0,sizeof(int));
    negative = calloc(0,sizeof(int));
    int positiveIndex = 0;
    int negativeIndex = 0;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i] >= 0){
            ++positiveIndex;
            realloc(positive,positiveIndex*sizeof(int));
            positive[positiveIndex] = array[i];
        } else {
            ++negativeIndex;
            realloc(negative,negativeIndex*sizeof(int));
            negative[negativeIndex] = array[i];
        }
    }
    printf("Positive: %d",positive[0]);
    printf("Negative numbers: ");
    for(int i=0; i< sizeof(negative)/sizeof(negative[0]); i++){
        printf("%d; ",negative[i]);
    }
    printf("\nPositive numbers: ");
    for(int i=0; i< sizeof(positive)/sizeof(positive[0]); i++){
        printf("%d; ",positive[i]);
    }
    free(positive);
    free(negative);
    */

    /*
    // TIC TAC TOE game
    char winner = ' ';
    char response;
    do{
        winner = ' ';
        response = ' ';
        resetBoard();
        while(winner==' ' && checkFreeSpaces()!=0){
            printBoard();
            playerMove();
            winner = checkWinner();
            if(winner!=' ' || checkFreeSpaces()==0){
                break;
            }
            computerMove();
            winner = checkWinner();
            if(winner!=' ' || checkFreeSpaces()==0){
                break;
            }
        }
        printBoard();
        printWinner(winner);
        printf("\nWould you like to play again? (Y/N): ");
        scanf(" %c");
        scanf("%c",&response);
        response = toupper(response);
    }while(response=='Y');
    printf("Thanks for playing!");
    */

    return 0;
}

void hello(char name[],int age){
    printf("\nHello %s",name);
    printf("\nYou are %d years old",age);
};

// function to add two integers
int sum(int a, int b) {
   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);
   return a + b;
}

void printBook( struct Books book ) {
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

// passing address
/*
void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}
*/

void resetBoard(){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            board[i][j] = ' ';
        }       
    }
}

void printBoard(){
    printf(" %c | %c | %c ",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[2][0],board[2][1],board[2][2]);
    printf("\n---|---|---\n");
    printf("\n");
}

int checkFreeSpaces(){
    int freeSpaces = 9;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i][j]!=' '){
                freeSpaces--;
            }
        }    
    }
    return freeSpaces;
}

void playerMove(){
    int x;
    int y;
    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d",&x);
        x--;
        printf("Enter column #(1-3): ");
        scanf("%d",&y);
        y--;
        if(board[x][y]!=' '){
            printf("Invalid move!\n");
        } else {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y]!=' ');
    

}

void computerMove(){
    // creates a seed based on current time
    srand(time(0));
    int x;
    int y;
    if(checkFreeSpaces()>0){
        do{
            x = rand() % 3;
            y = rand() % 3;
        } while(board[x][y]!=' ');
        board[x][y] = COMPUTER;
    } else {
        printWinner(' ');
    }
}

char checkWinner(){
    // check rows
    for(int i=0; i<3; i++){
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
            return board[i][0];
        }
    }
    // check columns
    for(int i=0; i<3; i++){
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i]){
            return board[0][i];
        }
    }
    // check diagonals
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2]){
        return board[0][0];
    }
    if(board[0][2]==board[1][1] && board[0][2]==board[2][0]){
        return board[0][2];
    }
    return ' ';
}

void printWinner(char winner){
    if(winner == PLAYER){
        printf("YOU WIN!");
    } else if(winner == COMPUTER){
        printf("YOU LOSE!");
    } else {
        printf("IT'S A TIE!");
    }
}