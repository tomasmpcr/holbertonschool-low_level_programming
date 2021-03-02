#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen - cal the len of a array
 *@s: array
 *
 *Return: int len
 */
int _strlen(char *s)
{
	int i = 0;

	if (s != NULL)
	{
		for (; s[i] != '\0'; i++)
		{
		}
	}

	return (i);
}


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

	buffer = malloc(_strlen(str));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		buffer[i] = str[i];

	buffer[i] = '\0';

	return (buffer);
}
