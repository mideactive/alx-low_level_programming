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

[2-print_alphabet_x10.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c) : i have my 'main.h' function where i'll add my prototype already, i also have my '_putchar' function which i'm use to pint out my result. The task now is to loop through the lower alphabets 10x in 'void print_alphabet_x10(void)', call the function from the main function to display the result.


#### 3. islower

	Write a function that checks for lowercase character.

		Prototype: int _islower(int c);
		Returns 1 if c is lowercase
		Returns 0 otherwise
	FYI: The standard library provides a similar function: islower. Run man islower to learn more.

### Solution:

[3-islower.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c) : here, we're also using add our new prototype 'int _islower(int c)' to the 'main.h' header file, where we already have the needed header files, and our '_putchar' prototype. I ceated a 'char' variable inside the 'int _islower(int c)' function, i loop through the lower case alphabet [a..z]. I did a text to check if the 'int' a parameter in == to the 'char' parameter. if true, 'return 1', else 'retun 0'. Then our function is called and texted in inside the main function.



#### 4. isalpha

	Write a function that checks for alphabetic character.

		Prototype: int _isalpha(int c);
		Returns 1 if c is a letter, lowercase or uppercase
		Returns 0 otherwise
	FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

### Solution:

[4-isalpha.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c) : I added the 'int _isalpha(int c)' prototype to the 'main.h' header file. Then run through lower and upper alphabet [a..z][A..Z] by creating two variables for each, and the check if the variables is '==' to the int parameter inside the '_isalpha' function, when it's called inside the main function, it returns 1 if it's either lower, or upper alphabet. and return 0 if it's neither.


#### 5. Sign

	Write a function that prints the sign of a number.

		Prototype: int print_sign(int n);
		Returns 1 and prints + if n is greater than zero
		Returns 0 and prints 0 if n is zero
		Returns -1 and prints - if n is less than zero

### Solution:

[5-sign.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c) : I added the 'int print_sign(int n)' pototype to the 'main.h' header file as usual. i did  a conditional if, else if, else chech on 'int n' to enable the function return the appropiate result. i used the '_putchar' function to print the signs, and then called the 'int print_sign(int n)' function inside the main function to print out the results.



#### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

	Write a function that computes the absolute value of an integer.

		Prototype: int _abs(int);
	FYI: The standard library provides a similar function: abs. Run man abs to learn more.

[6-abs.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c) : this task replicates the 'abs' function. I added my 'int _abs(int)' prototype to the header file, i did a check inside the 'int _abs(int r)' to check if value is '>=' 0, if yes, return value 'r', else multiple value 'r' * '-1', which ensure our function always return a positive value even when a nagative value is passed to it. Then i called it in the main function to print out the results.



#### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

	Write a function that prints the last digit of a number.

		Prototype: int print_last_digit(int);
		Returns the value of the last digit

### Solution:

[7-print_last_digit.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c) : This task is simple uses the '% 10' inside the 'int print_last_digit(int)' function, to get the last digit of our negative, zero and positive numbers. I used the conditional 'if else statement to archive this task. If this function is used inside the main function, it will print out the last digit of numbers supplied to it.


#### 8. I'm federal agent Jack Bauer, and today is the longest day of my life

	Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

		Prototype: void jack_bauer(void);
		You can listen to this soundtrack while coding :)

### Solution:

[8-24_hours.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c) : For this task, i created two 'int' variables inside the 'void jack_bauer(void)' function. and did a nexeted loop through to attain the mins and hours. I then printed out my result using the '_putchar' function, and called the 'jack_bauer()' inside the 'main' function.


#### 9. Learn your times table

	Write a function that prints the 9 times table, starting with 0.

		Prototype: void times_table(void);
		Format: see example

### Solution:

[9-times_table.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c) : for this task, i created three variables inside the 'void times_table(void)' function, and looped through, and multiply both variables, by each othe to attain the multiples of both variables, which i the stored in the third variable. I also used the conditional 'if and else' statements, and the '_putchar' to manipulate and get the right format to print out. And the called the 'void times_table(void)' function inside the 'main' function.


#### 10. a + b

	Write a function that adds two integers and returns the result.

		Prototype: int add(int, int);

### Solution:

[10-add.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c) : This task only add two variables, and it is called in the main function, then the addition of two integers passed to the function is printed out.


  

