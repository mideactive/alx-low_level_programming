#include "function_pointers.h"
/**
 *print_name - A function that points to another function to print a value
 *@name: A variable that holds the value to be printed
 *@f: A pointer to the varibale 'name'
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
