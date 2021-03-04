#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - check null pointer for malloc fail
 *@b: int the size of malloc
 *
Ã *Return: voidpointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
