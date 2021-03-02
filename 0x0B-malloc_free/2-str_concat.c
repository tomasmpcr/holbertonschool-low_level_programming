#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *);

/**
 *str_concat - concatenate string
 *@s1: char
 *@s2: char
 *
 *Return: buffer char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j, l_s1 = _strlen(s1), l_s2 = _strlen(s2), l_buffer;
	char *buffer;

	l_buffer = l_s1 + l_s2 + 1;

	buffer = malloc(sizeof(char) * l_buffer);
	if (buffer == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (j = 0; s1[j] != '\0'; i++, j++)
			buffer[i] = s1[j];
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; i++, j++)
			buffer[i] = s2[j];
	}

	buffer[i] = '\0';

	return (buffer);
}


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
