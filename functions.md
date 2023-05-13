# Functions

Functions: A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions. You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task. A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function. The C standard library provides numerous built-in functions that your program can call. For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions. A function can also be referred as a method or a sub-routine or a procedure, etc.
defining a function: The general form of a function definition in C programming language is as follows:
return_type function_name( parameter list ) {
    body of the function
}

A function definition in C programming consists of a function header and a function body. Here are all the parts of a function:

    Return Type (A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.)
    Function Name (This is the actual name of the function. The function name and the parameter list together constitute the function signature.)
    Parameters (A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.)
    Function Body (The function body contains a collection of statements that define what the function does.)

Function declarations: A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately. A function declaration has the following parts:
    return_type function_name( parameter list );

Parameter names are not important in function declaration only their type is required.
Function declaration is required when you define a function in one source file and you call that function in another file. In such case, you should declare the function at the top of the file calling the function.
Calling a function: While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task. When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program. To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.
Function arguments: If a function is to use arguments, it must declare variables that accept the values of the arguments. These variables are called the formal parameters of the function. Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit. While calling a function, there are two ways in which arguments can be passed to a function:
    
    Call by value (This method copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.)
    Call by reference (This method copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.)

By default, C uses call by value to pass arguments. In general, it means the code within a function cannot alter the arguments used to call the function.

Function prototype: A function declaration, without the body, before the main(). It ensures that calls to a function are made with the correct arguments. Many C compilers do not check for parameter matching. Missing arguments will result in unexpected behavior. A function prototype causes the compiler to flag an error if arguments are missing.The main advantages are:
    
    Easier to navigate a program without main() at the top.
    Helps with debugging.
    Commonly used in header files.

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

## Bibliography

Bro Code. (2021.10.7.). C Programming Full Course for free [Video]. YouTube. https://www.youtube.com/watch?v=87SH2Cn0s9A

C - Functions. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_functions.htm

C Math Functions. (2022, February 21). W3schools. Retrieved April 16, 2023, from https://www.w3schools.com/c/c_math.php