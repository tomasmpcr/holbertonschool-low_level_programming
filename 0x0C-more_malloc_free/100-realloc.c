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
	void *p;

	if (new_size > old_size)
	{
		p = realloc(ptr, old_size + new_size);
		free(ptr);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		p = malloc(old_size + new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	free(ptr);
	return (NULL);
}
