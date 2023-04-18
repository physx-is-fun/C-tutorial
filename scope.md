# Scope rules

Scope rules: A scope in any programming is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed. There are three places where variables can be declared in C programming language:
    * Inside a function or a block which is called local variables.
    * Outside of all functions which is called global variables.
    * In the definition of function parameters which are called formal parameters.

Local variables: Variables that are declared inside a function or block are called local variables. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own.

Global variables: Global variables are defined outside a function, usually on top of the program. Global variables hold their values throughout the lifetime of your program and they can be accessed inside any of the functions defined for the program. A global variable can be accessed by any function. That is, a global variable is available for use throughout your entire program after its declaration.

A program can have same name for local and global variables but the value of local variable inside a function will take preference.

Formal parameters: Formal parameters, are treated as local variables with-in a function and they take precedence over global variables.

Initializing local and global variables: When a local variable is defined, it is not initialized by the system, you must initialize it yourself. Global variables are initialized automatically by the system when you define them as follows:
    int (0)
    char ('\0')
    float (0)
    double (0)
    pointer (NULL)

It is a good programming practice to initialize variables properly, otherwise your program may produce unexpected results, because uninitialized variables will take some garbage value already available at their memory location.

## Bibliography

C - Scope Rules. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm