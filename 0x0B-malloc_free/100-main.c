#include "main.h"

/**
 * main - check the code for ALX School students.
 *@ac: a variable
 *@av: a variable
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
