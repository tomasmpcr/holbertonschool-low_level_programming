#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a string
 *@str: char
 *
 *Return: buffer char
 */
char *_strdup(char *str)
{
	int i;
	char *buffer;

	buffer = malloc(sizeof(str));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		buffer[i] = str[i];

	buffer[i] = '\0';

	return (buffer);
}
