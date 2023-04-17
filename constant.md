# Constants and literals

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
    \xhh… (The byte whose numerical value is given by hh… interpreted as a hexadecimal number)
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

```c
const int LENGTH = 10;
```

Note that it is a good programming practice to define constants in CAPITALS.

## Bibliography

C - Constants and Literals. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_constants.htm