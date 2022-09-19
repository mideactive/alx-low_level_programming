#include "main.h"
/**
*swap_int - swaps values between int variables.
*
*@a: pointer to variable a.
*
*@b: pointer to variable b.
*
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
