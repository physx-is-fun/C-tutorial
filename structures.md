# Structures

Structures: Arrays allow to define type of variables that can hold several data items of the same kind. Similarly structure is another user defined data type available in C that allows to combine data items of different kinds. Structures are used to represent a record. Suppose you want to keep track of your books in a library. You might want to track the following attributes about each book:
    
    title
    author
    subject
    book ID

Defining a structure: To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member. The format of the struct statement is as follows:
struct [structure tag] {
    member definition;
    member definition;
    ...
    member definition;
} [one or more structure variables];

The structure tag is optional and each member definition is a normal variable definition, such as int i; or float f; or any other valid variable definition. At the end of the structure's definition, before the final semicolon, you can specify one or more structure variables but it is optional. Here is the way you would declare the Book structure:

```c
struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} book;
```

Accessing structure members: To access any member of a structure, we use the member access operator (.). The member access operator is coded as a period between the structure variable name and the structure member that we wish to access. You would use the keyword struct to define variables of structure type.
Structures as function arguments: You can pass a structure as a function argument in the same way as you pass any other variable or pointer:
Pointers to structures: You can define pointers to structures in the same way as you define pointer to any other variable:

```c
struct Books *struct_pointer;
```

Now, you can store the address of a structure variable in the above defined pointer variable. To find the address of a structure variable, place the '&'; operator before the structure's name as follows:

```c
struct_pointer = &Book1;
```

To access the members of a structure using a pointer to that structure, you must use the → operator as follows:

```c
struct_pointer->title;
```

## Bibliography

C - Structures. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_structures.htm