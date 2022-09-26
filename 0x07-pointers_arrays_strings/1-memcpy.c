#include "main.h"
/**
*_memcpy - A function that copies memory area
*@dest: Destination of memory area to be copied
*@src: Source of memory area to be copied
*@n: Number of memory area bytes to be copied
*Return: A pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}


