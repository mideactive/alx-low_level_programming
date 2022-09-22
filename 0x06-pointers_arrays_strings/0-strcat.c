#include "main.h"
#include <string.h>
/**
*_strcat - a function that concatonate two strings
*@dest: a pointer to the first string
*@src: a pointer to the second string
*Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
		return (dest);
}
