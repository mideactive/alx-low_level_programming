#include "main.h"
/**
*_putchar - A function that prints a single charater
*@c: A variable that holds the charater
*Return: Return inputed charater
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
