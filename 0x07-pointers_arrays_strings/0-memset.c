#include "main.h"
/**
*_memset - A function that fills memory with a constant
*@s: Location to fill
*@b: Charater to fill location
*@n: Number of bytes to fill
*Return: pointer to location filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ss = s;

	while (n--)
	{
		*s = b;
		s++;
		}
	return (ss);
}
