#include "dog.h"
/**
 *_putchar - A putchar function
 *@c: A variable that accepts a value
 *Return: Return a value given to the _putchar
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
