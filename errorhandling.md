# Errorhandling

Error handling: As such, C programming does not provide direct support for error handling but being a system programming language, it provides you access at lower level in the form of return values. Most of the C or even Unix function calls return -1 or NULL in case of any error and set an error code errno. It is set as a global variable and indicates an error occurred during any function call. You can find various error codes defined in <error.h> header file. So a C programmer can check the returned values and can take appropriate action depending on the return value. It is a good practice, to set errno to 0 at the time of initializing a program. A value of 0 indicates that there is no error in the program.

errno, perror(). and strerror(): The C programming language provides perror() and strerror() functions which can be used to display the text message associated with errno:
    
    The perror() function displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.
    
    The strerror() function, which returns a pointer to the textual representation of the current errno value.

Divide by zero errors: It is a common problem that at the time of dividing any number, programmers do not check if a divisor is zero and finally it creates a runtime error.

Proram exit status: It is a common practice to exit with a value of EXIT_SUCCESS in case of program coming out after a successful operation. Here, EXIT_SUCCESS is a macro and it is defined as 0. If you have an error condition in your program and you are coming out then you should exit with a status EXIT_FAILURE which is defined as -1.

## Bibliography

C - Error Handling. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_error_handling.htm