#include "main.h"
/**
*main - Receives and count supplied parameters
*@argc: counts the number of given parameter
*@argv: Points to a string or strings of parameters
*Return: Nothing
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);	
	return (0);
}
