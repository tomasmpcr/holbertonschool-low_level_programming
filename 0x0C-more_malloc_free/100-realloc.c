#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - re size array
 *@ptr: string
 *@old_size: int
 *@new_size: uns int
 *
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *new_ptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(old_size + new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(old_size + new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		p[i] = new_ptr[i];

	free(ptr);
	return (p);
}
