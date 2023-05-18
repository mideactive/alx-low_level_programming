## <div align="center">C - Functions, nested loops</div>

OS: Linux-ubuntu 20.4

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

#### 0. _putchar

		Write a program that prints _putchar, followed by a new line.

		The program should return 0

### Solution:

[0-putchar.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c): for this task, i looped though the '_putchar' alphabets, which is actually a array of characters.


#### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

	Write a function that prints the alphabet, in lowercase, followed by a new line.

		Prototype: void print_alphabet(void);
		You can only use _putchar twice in your code

### Solution:

[1-alphabet.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c) : for the task, i created header file called the 'main.h' where i have all my prototypes. I also created a '_putchar' function that i used to print out whatever i want to print. I used the 'unstd.h' library function 'write(stdin, stdout, stderr)' in my '_putchar' function. then i looped through the lower alphabets in the void print_alphabet(void) function, which was then called in the main function.


#### 2. 10 x alphabet

	Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

		Prototype: void print_alphabet_x10(void);
		You can only use _putchar twice in your code

### Solution:

[2-print_alphabet_x10.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c) : i have my main.h function where i'll add my prototype already, i also have my '_putchar' function which i'm use to pint out my result. The task now is to loop through the lower alphabets 10x in 'void print_alphabet_x10(void)', call the function from the main function to display the result.
