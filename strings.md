# Strings

Strings: Strings are actually one-dimensional array of characters terminated by a null character '\0'. Thus a null-terminated string contains the characters that comprise the string followed by a null. The following declaration and initialization create a string consisting of the word "Hello". To hold the null character at the end of the array, the size of the character array containing the string is one more than the number of characters in the word "Hello."

```c
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

If you follow the rule of array initialization then you can write the above statement as follows:

```c
char greeting[] = "Hello";
```

Actually, you do not place the null character at the end of a string constant. The C compiler automatically places the '\0' at the end of the string when it initializes the array. Let us try to print the above mentioned string.

C supports a wide range of functions that manipulate null-terminated strings
    strcpy(s1, s2) (Copies string s2 into string s1.)
    strcat(s1, s2) (Concatenates string s2 onto the end of string s1.)
    strlen(s1) (Returns the length of string s1.)
    strcmp(s1, s2) (Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.)
    strchr(s1, ch) (Returns a pointer to the first occurrence of character ch in string s1.)
    strstr(s1, s2) (Returns a pointer to the first occurrence of string s2 in string s1.)

## Bibliography

C - Strings. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_strings.htm