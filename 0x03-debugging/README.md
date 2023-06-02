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


### 2. 0 > 972?

	This program prints the largest of three integers.

2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}

2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

Line count will not be checked for this task.

### Solution:

[2-largest_number.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c) : To fix this bug, the first 'if' statement is (a > b && a > c), the second is else if(b > a && b > c), and finally we make a check else if (c > a && c > b). This will give us the expected result.


#### 3. Leap year

	This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

Output looks good for 04/01/1997! Let’s make a new main file 3-main_b.c to try a case that is a leap year: 02/29/2000.

Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

Line count will not be checked for this task.
You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

### Solution:

[3-print_remaining_days.c](https://github.com/mideactive/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c) : The problem of this task is here if (month >= 2 && day >= 60), if (month > 2) should be used to correctly account for extra day in a leap year. If the month is greater than February, it's inceamented by 1 day.

 
