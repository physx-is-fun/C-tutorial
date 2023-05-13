# Arrays

## Arrays 

Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type. Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

## Declaring arrays: 

To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows:
type arrayName [ arraySize ];
This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement:

```c
double balance[10];
```

Here balance is a variable array which is sufficient to hold up to 10 double numbers.
Initializing arrays: You can initialize an array in C either one by one or using a single statement as follows:

```c
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ]. If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write:

```c
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```

You will create exactly the same array as you did in the previous example. Following is an example to assign a single element of the array:

```c
balance[4] = 50.0;
```

The above statement assigns the 5th element in the array with a value of 50.0. All arrays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1.
accessing array elements: An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example:

```c
double salary = balance[9];
```

## Arrays in detail

Arrays are important to C and should need a lot more attention. The following important concepts related to array should be clear to a C programmer:
    
    multi-dimensional arrays (C supports multidimensional arrays. The simplest form of the multidimensional array is the two-dimensional array.)
    passing arrays to functions (You can pass to the function a pointer to an array by specifying the array's name without an index.)
    return array from a function (C allows a function to return an array.)
    pointer to an array: (You can generate a pointer to the first element of an array by simply specifying the array name, without any index.)

## Bibliography

C - Arrays. (2012, June 10). Tutorials Point. Retrieved April 16, 2023, from https://www.tutorialspoint.com/cprogramming/c_arrays.htm