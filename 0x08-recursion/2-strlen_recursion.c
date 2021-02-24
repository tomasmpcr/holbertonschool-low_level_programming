#include "holberton.h"

/**
 *_strlen_recursion - print a int in form recurisive and contain the length the string
 *@s: the string
 *-----------------------------------------------------
 *return: int
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		s++;
		n = _strlen_recursion(s);
		n++;
	}

	return (n);
}
