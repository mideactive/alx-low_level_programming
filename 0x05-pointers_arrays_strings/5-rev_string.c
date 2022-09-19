#include "main.h"
/**
*rev_string - A function that reverse a string
*
*@s: a variable of the string to be reversed
*
*Return: Nothing
*/
void rev_string(char *s)
{
	int l = 0, i = 0;
	char t;

	while (s[l])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
