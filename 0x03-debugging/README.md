### <div align="center">C - Debugging</div>

#### OS: linux-ubuntu 20.4

Requirements

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about


## Tasks

#### 0. Multiple mains

	In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}

main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */

Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
You are not allowed to add or remove lines of code, you may change only one line in this task.

### Soltion:

[0-main.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x03-debugging/0-main.c) : Based on an already defined prototype 'void postitive_or_negative(int i)', used inside the function postitive_or_negative.c. I created a new main function named '0-main.c', where i created a variable and initialized it to '0'. Then the 'postitive_or_negative()' function is called in the '0-main.c', and the variable that is initialized to '0' passed to it. The protoype of the 'postitive_or_negative.c' is placed inside the 'main.h' header file. Also, the conditional statements; if, if else, and else is used inside the postitive_or_negative.c function to determine the value supplied to it.



#### 1. Like, comment, subscribe

	Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

	Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
		You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

### Solution:

[1-main.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x03-debugging/1-main.c) :  All we have to do here is to comment out the 'while loop' statement, then the problem is fixed.



