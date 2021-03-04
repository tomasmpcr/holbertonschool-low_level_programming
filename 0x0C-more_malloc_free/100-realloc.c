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
	void *v;
	char *ram;

	if (ptr == NULL)
	{
		v = malloc(old_size + new_size);
		if (v == NULL)
			return (NULL);
		return (v);
	}
	else if (new_size > old_size)
	{
		p = malloc(old_size + new_size);
		if (p == NULL)
			return (NULL);

		ram = ptr;

		for (i = 0; i < old_size; i++)
			p[i] = ram[i];

		v = &p;
		free(ptr);
		return (v);
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

	free(ptr);
	return (NULL);
}
