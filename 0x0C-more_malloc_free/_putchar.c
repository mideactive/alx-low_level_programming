#include "main.h"
/**
*_putchar - A putchar function
*@c: A variable that accept charater
*Return: Inputed charater
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
