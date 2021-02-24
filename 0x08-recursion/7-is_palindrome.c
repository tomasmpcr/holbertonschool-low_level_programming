#include "holberton.h"


/**
 *_pali - calc palin
 *@s: the string
 *@i: iter
 *@l: lenhth
 *-----------------------------------------------------
 *Return: int
 */
int _pali(char *s, int i, int l)
{
	if (i < l)
	{
		if (s[i] == s[l])
		{
			return (_pali(s, i + 1, l - 1));
		}
		else
			return (0);
	}
	else
		return (1);
}


/**
 *_strlen_recursion - print a int in form recurisive
 *and contain the length the string
 *@s: the string
 *-----------------------------------------------------
 *Return: int
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

/**
 *is_palindrome - palindrome
 *@s: string
 *--------------------------
 *Return: int
 */
int is_palindrome(char *s)
{
	int n = _pali(s, 0, _strlen_recursion(s) - 1);

	return (n);
}
