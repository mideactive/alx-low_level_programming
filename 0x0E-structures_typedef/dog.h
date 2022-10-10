#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct dog - A struction that declare the data item of a dog
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: The owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char a);

#endif
