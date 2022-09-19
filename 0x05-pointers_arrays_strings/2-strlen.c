#include "main.h"
/**
*_strlen - check the length of a value.
*
*@s: pointer to the value
*
*Return: Nothing
*/
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
