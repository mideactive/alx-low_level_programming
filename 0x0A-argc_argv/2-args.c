#include "main.h"
/**
*main - Hold a counter and a pointer variables
*@argc: counts inputs
*@argv: Points to supplied string
*Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
