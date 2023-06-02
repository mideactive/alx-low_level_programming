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

### Soltion:

[0-main.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x03-debugging/0-main.c) : Based on an already defined prototype 'void postitive_or_negative(int i)', used inside the function postitive_or_negative.c. I created a new main function named '0-main.c', where i created a variable and initialized it to '0'. Then the 'postitive_or_negative()' function is called in the '0-main.c', and the variable that is initialized to '0' passed to it. The protoype of the 'postitive_or_negative.c' is placed inside the 'main.h' header file. Also, the conditional statements; if, if else, and else is used inside the postitive_or_negative.c function to determine the value supplied to it.


