#include <stdio.h>

/**
*factorial - A frunction the return the factorial of a given number
*@n: A variable that will hold the given number
*Return: The factorial if the number
*/
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
