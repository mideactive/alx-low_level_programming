#include "main.h"
/**
*_strchr - function that locates a charater in a string
*@s: a string from where the chaaracter is to be located
*@c: The string where the charater is stored
*Return: The stored charater
*/
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
