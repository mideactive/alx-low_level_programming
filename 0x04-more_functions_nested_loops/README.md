### <div align="center">0x04. C - More functions, more nested loops</div>

#### OS:linux-ubuntu 20.04

Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file


## Tasks


#### 0. isupper

	Write a function that checks for uppercase character.

		Prototype: int _isupper(int c);
		Returns 1 if c is uppercase
		Returns 0 otherwise
	FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

### Soluiton:

[](): or example 'char k' is created and assigned the value 'A', which will be loop through to 'Z'. 'int i' is created and initialized 0. We check if the value supplied to 'int c' == the 'char k', if true, 'int i = 1'. The 'i' is returned. If this condition is not true, '0' will be returned.


#### 1. isdigit

	Write a function that checks for a digit (0 through 9).

		Prototype: int _isdigit(int c);
		Returns 1 if c is a digit
		Returns 0 otherwise
	FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}

### Solution:

[](): a simple check is made that, if c >= 0 && c <= 9 '1' should be returned, else '0'should be returned. 
