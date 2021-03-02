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

	return (i + 1);
}


/**
 *argstostr - concaten strings in a pointer
 *@ac: int
 *@av: char
 *
 *Return: *char
 */
char *argstostr(int ac, char **av)
{
	int i, j, l_buffer, i_buffer;
	char *buffer;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		l_buffer += _strlen(av[i]);

	buffer = malloc(sizeof(char) * l_buffer);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, i_buffer++)
			buffer[i_buffer] = av[i][j];

		buffer[i_buffer++] = '\n';
	}

	return (buffer);
}
