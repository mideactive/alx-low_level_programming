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
	int v = 0;

	while (str[v] != '\0')
	{
		_putchar(str[v]);
		v++;
	}
	_putchar('\n');
}
