#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - create a string
 *@nmemb: uns int
 *@size: uns int
 *
 *Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, cal;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = nmemb * size;

	p = malloc(cal);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < cal; i++)
		p[i] = 0;

	return (p);
}
