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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char a);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
