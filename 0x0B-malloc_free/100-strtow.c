#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *pal_len - create a new pal
 *@str: char
 *
 *Return: **char
 */
int pal_len(char *str)
{
	int i, pal = 0, paso = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			paso = 1;
			continue;
		}

		if (paso)
		{
			paso = 0;
			pal++;
		}
	}

	return (pal);
}


/**
 *len_pal - calcule len of pal
 *@str: char
 *@l_pal: int
 *
 *Return: *int
 */
int *len_pal(char *str, int l_pal)
{
	int i, pal = 0, carac = 0;
	int *buffer;

	buffer = malloc(l_pal * sizeof(int));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			carac = 0;
			continue;
		}

		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			buffer[pal] = carac + 1;
			pal++;
		}
		else
			carac++;
	}

	return (buffer);
}


/**
 *strtow - create a table
 *@str: char
 *
 *Return: **char
 */
char **strtow(char *str)
{
	int i, j, r, pal = pal_len(str);
	int *l_pal = len_pal(str, pal);
	char **buffer;

	if (str == NULL || str == '\0' || l_pal == NULL)
		return (NULL);
	buffer = malloc((pal + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < pal; i++)
	{
		buffer[i] = malloc((l_pal[i] + 1) * sizeof(char));
		if (buffer[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(buffer[i]);
			free(buffer);
			return (NULL);
		}
	}
	/*Rellenamos con los caracteres*/
	for (i = 0, j = 0, r = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		buffer[j][r] = str[i];
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			buffer[j][++r] = '\0';
			j++;
			r = 0;
		}
		else
			r++;
	}
	buffer[j] = NULL;
	return (buffer);
}
