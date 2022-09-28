#include "main.h"
/**
*_strlen_recursion - A funtion that prints the length of a string
*@s: A variable that holds the string that we are looking for its  length
*Return: The lenght of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
		return (len);
}
