# C Typedef

## typedef

The C programming language provides a keyword called typedef, which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers:

typedef unsigned char BYTE;

After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char, for example:

BYTE  b1, b2;

By convention, uppercase letters are used for these definitions to remind the user that the type name is really a symbolic abbreviation, but you can use lowercase, as follows:

```c
typedef unsigned char byte;
```

## typedef vs #define

#define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences:
    
    typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
    typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.

## Bibliography

C - typedef. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_typedef.htm