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
	if (new_size > old_size)
	{
		ptr = realloc(ptr, old_size + new_size);
		return (ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(old_size + new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	free (ptr);
	return (NULL);
}
