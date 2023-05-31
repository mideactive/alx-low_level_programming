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


#### 11. 98 Battery Street, the OG

	Write a function that prints all natural numbers from n to 98, followed by a new line.

		Prototype: void print_to_98(int n);
		Numbers must be separated by a comma, followed by a space
		Numbers should be printed in order
		The first printed number should be the number passed to your function
		The last printed number should be 98
		You are allowed to use the standard library

### Solution:

[11-print_to_98.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c) : For this task, we created a function that ensues that whatever value is supplied to the 'int n' must end with 98, be it a possitive value, nagative or even a greater number. Here, i used the 'for loop' statement in inside the conditional 'if else' statment to obtain my result. That is, 'if n <= 98' then it can loop from 0 to 98, 'else' loop 'n >= 98; n--' from a greater value down to '98'. Then, i used printf() to print out the result, and also obtain the indentations needed. The function function is called in the 'main' function, and prints out value supplied to it.


#### 12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself

	Write a function that prints the n times table, starting with 0.

		Prototype: void print_times_table(int n);
		If n is greater than 15 or less than 0 the function should not print anything
	Format: see example

### Solution:

[100-times_table.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c) : This task is a bit complex, not because of printing out multiplication table of 'n' from 0 to 15. It's about the fact that it has to be printed out in a certain pertern. I've done similar task from above, but this is a bit more complex than previous. Firstly, i have to create 3 varibales inside the 'void print_times_table(int n)', two out of the variables we be used to loop through 'n'. While the last will be used to store the multiplication of both. Then, i check if 'n >= 0' && 'n >= 15'. if this condition is true, then i used a 'for loop' statement to loop through 'n' and store the value in the third variable. It's easier for me to extract multiplication with single values, or those '>=' 100 using the '_putchar()' function, also set the commas and spaces. check code for reference.


#### 13. Nature made the natural numbers; All else is the work of women

	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Wri		te a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

		You are allowed to use the standard library

### Solution:

[101-natural.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c) : This task is about getting the multiples of 3 or 5 bellow 1034. I simply created three variables, the first one stores '1034', the second variable '= 0' that will store the sum of multiples of 3 or 5. I used the third variable to loop though '1034'. I then did a check using the if conditional statement i.e 'if third variable divided by 3 has no remender, '||' if third variable divided by 5' also has no remender. Then sum it up into the second varibale.


#### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program 		that would steal passwords of students. My teacher gave me an A

	Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

		The numbers must be separated by comma, followed by a space , 
		You are allowed to use the standard library

### Solution:

[102-fibonacci.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c) : In a fibonacci sequence, the addition of two initial value results to the next value in the sequence. We're ask to start our sequence from 1 & 2. Therefore, i created an array that holds 50 values. I assign my first value which is 0 to be 1, and the second which is 1 to be 2. i looped through the array, and added fibo[i - 1] + fibo[i -2],and stored it inside fibo[i]. i looped through to 50 again, and printed the result. and did a check if (i < 49) print a comma and space. 
