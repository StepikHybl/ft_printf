*This project has been created as part of the 42 curriculum by shybl.*

# Printf Project

## 📄 Description

The goal of this project is to recode function `printf()`. This project teaches the use of **variadic arguments** in C (using the `stdarg.h` library) and reinforces the importance of well-structured code.

Unlike the original `printf`, this version does not implement buffer management. It focuses on handling specific conversions and returning the exact number of characters printed.

### Supported Conversions
The `ft_printf` handles:
* `%c` - Prints a single character
* `%s` - Prints a string
* `%p` - Prints a `void *` pointer in hexadecimal format
* `%d` / `%i` - Prints a decimal/integer in base 10
* `%u` - Prints an unsigned decimal number
* `%x` - Prints a number in hexadecimal lowercase
* `%X` - Prints a number in hexadecimal uppercase
* `%%` - Prints a percent sign

## 🛠️ Instructions

### Compilation

Navigate to the project root and use `make`:

`make` - compiles all source files into the static library libftprintf.a

### Usage
`#include "ft_printf.h"` - Include the header in your C files and link the library during compilation

`compile` -cc 

`flags` -Wall -Wextra -Werror -I

### Cleaning
`make clean` - clean object files

`make fclean` - full cleanup

## 🎁 Features

### Return Value:
Precisely matches the original printf by returning the total length of the printed string

### No Buffer Management:
Simple, direct output as per project constraints

### Variadic Logic:
Uses va_start, va_arg, and va_end to handle an unknown number of arguments
## 📚 Resources
Official Requirements: The project subject provided by 42 School

References: Man pages

Documentation: C language and data structures documentation

w3school : https://www.w3schools.com/

github: https://github.com/

reddit: https://www.reddit.com/

stack oveflow: https://stackoverflow.com/

AI Usage: AI was used to help structure and format this documentation
