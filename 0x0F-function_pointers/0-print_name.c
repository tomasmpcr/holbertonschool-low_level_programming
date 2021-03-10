#include "function_pointers.h"

/**
 *print_name - Call the function pas
 *@name: parametro function
 *@f: the function
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
