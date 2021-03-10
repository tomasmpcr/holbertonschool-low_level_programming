#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Call the function pas
 *@name: parametro function
 *@f: the function
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
