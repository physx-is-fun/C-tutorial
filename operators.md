# Operators

## Operators

An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators:

    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Misc Operators

## Arithmetic operators

An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

    + (Adds two operands.)
    - (Subtracts second operand from the first.)
    * (Multiplies both operands.)
    / (Divides numerator by de-numerator.)
    % (Modulus Operator and remainder of after an integer)
    ++ (Increment operator increases the integer value by one.)
    -- (Decrement operator decreases the integer value by one.)

## Relational operators

A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

    == (Checks if the values of two operands are equal or not. If yes, then the condition becomes true.)
    > (Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.)
    < (Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.)
    != (Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.)
    >= (Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.)
    <= (Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.) 

## Bitwise operators: During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.

    & (Bitwise AND)
    | (Bitwise OR)
    ^ (Bitwise exclusive OR)
    ~ (Bitwise complement)
    << (Shift left)
    >> (Shift right)

## Assigment operators

Used to replace a statement where an operator takes a variable as one of its arguments and assigns the result back to the same variable. Examlple: x = x + 1; => x + = 1;

## Logical operators

An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

    && (Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.)
    || (Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.)
    ! (Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false.)

## Misc operators

Besides the operators discussed above, there are a few other important operators including sizeof and ? : supported by the C Language.
    sizeof()	(Returns the size of a variable.)
    & (Returns the address of a variable.)
    * (Pointer to a variable.)
    ? : (Conditional Expression.)

## Ternary operator

Programmers use the ternary operator for decision making in place of longer if and else conditional statements. The ternary operator take three arguments:

    The first is a comparison argument.
    The second is the result upon a true comparison.
    The third is the result upon a false comparison.

syntax: condition ? value_if_true : value_if_false
The statement evaluates to value_if_true if condition is met, and value_if_false otherwise. 

## Operators precedence

Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others. Here, operators with the highest precedence appear at the top of the table, those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.

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

## Bibliography

C - Operators. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_operators.htm