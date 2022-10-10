#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *dog - A struction that declare the data item of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char a);

#endif
