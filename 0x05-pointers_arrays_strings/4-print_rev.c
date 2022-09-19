#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int l = 0, index;

	while (s[index++])
		l++;

	for (index = l - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

