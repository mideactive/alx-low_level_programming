#include "main.h"
/**
*main - Holds input counter and pointer variables
*@argc: A counter variable
*@argv: A array that points to a string or strings
*Return: Always 0;
*/
int main(int argc, char *argv[])
{
	int num, num1, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		result = num * num1;
		printf("%d\n", result);
	return (0);
}
