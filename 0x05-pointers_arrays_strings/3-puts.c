#include "main.h"
/**
*_puts - writes a string to stdout
*
*@str: a pointer to the string
*
*Return: Nothing
*/
void _puts(char *str)
{
	int arr = 0;

	while (str[arr] != '\0')
		arr++;

	while(arr)
		_putchar(str[--arr]);

	_putchar('\n');
}
