#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - use malloc of create new space
 *@size: int
 *@c: int
 *
 *Return: buffer char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size <= 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}

	return (buffer);
}
