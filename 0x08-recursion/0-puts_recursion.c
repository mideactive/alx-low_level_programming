#include "main.h"
/**
*_puts_recursion - A function that prints a string
*@s: A varaible that stores the string to be returned
*Return: Nothing
*/
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
