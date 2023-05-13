# File I/O

A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through the important calls for file management.

## Opening files

You can use the fopen( ) function to create a new file or to open an existing file. This call will initialize an object of the type FILE, which contains all the information necessary to control the stream. The prototype of this function call is as follows:

```c
FILE *fopen( const char * filename, const char * mode );
```

Here, filename is a string literal, which you will use to name your file, and access mode can have one of the following values:
    
    r (Opens an existing text file for reading purpose.)
    w (Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.)
    a (Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.)
    r+ (Opens a text file for both reading and writing.)
    w+ (Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.)
    a+ (Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.)

If you are going to handle binary files, then you will use following access modes instead of the above mentioned ones: "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"

## Closing a file

To close a file, use the fclose( ) function. The prototype of this function is:

```c
int fclose( FILE *fp );
```

The fclose(-) function returns zero on success, or EOF if there is an error in closing the file. This function actually flushes any data still pending in the buffer to the file, closes the file, and releases any memory used for the file. The EOF is a constant defined in the header file stdio.h. There are various functions provided by C standard library to read and write a file, character by character, or in the form of a fixed length string.

## Writing a file

Following is the simplest function to write individual characters to a stream:

```c
int fputc( int c, FILE *fp );
```

The function fputc() writes the character value of the argument c to the output stream referenced by fp. It returns the written character written on success otherwise EOF if there is an error. You can use the following functions to write a null-terminated string to a stream:

```c
int fputs( const char *s, FILE *fp );
```

The function fputs() writes the string s to the output stream referenced by fp. It returns a non-negative value on success, otherwise EOF is returned in case of any error. You can use int fprintf(FILE *fp,const char *format, ...) function as well to write a string into a file.

## Reading a file

Given below is the simplest function to read a single character from a file:

```c
int fgetc( FILE * fp );
```

The fgetc() function reads a character from the input file referenced by fp. The return value is the character read, or in case of any error, it returns EOF. The following function allows to read a string from a stream:

```c
char *fgets( char *buf, int n, FILE *fp );
```

The functions fgets() reads up to n-1 characters from the input stream referenced by fp. It copies the read string into the buffer buf, appending a null character to terminate the string. If this function encounters a newline character '\n' or the end of the file EOF before they have read the maximum number of characters, then it returns only the characters read up to that point including the new line character. You can also use int 
fscanf(FILE *fp, const char *format, ...) function to read strings from a file, but it stops reading after 
encountering the first space character.

## Binary I/O functions

There are two functions, that can be used for binary input and output:

```c
size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);        
size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);   
```

Both of these functions should be used to read or write blocks of memories - usually arrays or structures.

## Bibliography

C - File I/O. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_file_io.htm