 Libft
 Description

Libft is a foundational C library project developed as part of the 42 curriculum. The main goal of this project is to recreate a set of standard C library functions, as well as implement additional utility functions that will be reused in future projects.

This project helps strengthen understanding of:

Memory management
String manipulation
Data structures (linked lists)
Code organization and modular programming in C

By building this library from scratch, the project reinforces low-level programming concepts and encourages writing clean, reusable, and efficient code.

 Instructions
 Compilation

To compile the library, navigate to the root directory and run:

make

This will generate the static library:

libft.a
 Clean Object Files
make clean / make wclean
 Full Clean (including library)
make fclean / make wfclean
 Recompile
make re 
 Usage

To use libft in your project:

Include the header file in your code:
#include "libft.h"
Compile your program with the library:
gcc your_file.c -L. -lft -o your_program
 Library Overview

The library is divided into several categories:

 Character Functions
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
ft_toupper, ft_tolower

 Memory Functions
ft_memset, ft_bzero, ft_memcpy, ft_memmove
ft_memchr, ft_memcmp, ft_calloc

 String Functions
ft_strlen, ft_strdup, ft_strcpy, ft_strncpy
ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr
ft_strlcpy, ft_strlcat

 String Manipulation
ft_substr, ft_strjoin, ft_strtrim
ft_split, ft_itoa
ft_strmapi, ft_striteri

 Output Functions
ft_putchar_fd, ft_putstr_fd
ft_putendl_fd, ft_putnbr_fd

 Example
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    printf("%s\n", str);
    free(str);
    return 0;
}
 Technical Choices
Written in pure C (C99 standard)
No use of standard library implementations (except allowed functions)
Modular structure for maintainability
Static library (.a) for reuse across projects
 Resources
 References
The C Programming Language by Kernighan & Ritchie
GNU C Library Documentation (glibc)
Linux man pages (man 3 function_name)
42 Intra subject documentation
 Use of AI

AI tools (such as ChatGPT) were used in the following ways:

Clarifying concepts (e.g., pointer arithmetic, memory allocation)
Debugging assistance and error explanation
Improving code readability and structure
Generating examples and test cases

All final implementations were written and understood by the author.

 Author
Login: vshanmug
Email: vshanmug@student.42kl.edu.my

 Notes

This library will serve as a base for future 42 projects such as get_next_line, ft_printf, and others. Maintaining clean and reusable code here is essential for long-term efficiency.
