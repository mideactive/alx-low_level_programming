#include "main.h"
/**
*_pow_recursion - A function that return the value of x raised to the powerof y
*@x: A variable that holds x
*@y: A variable that holds the number of time x should be multiplied by itself
*Return: Number of time x is multiplied by itself
*/
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
