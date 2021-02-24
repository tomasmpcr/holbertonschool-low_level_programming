#include "holberton.h"

/**
 *_rec_uno - loco
 *@n: int
 *@i: int
 *
 *Return int
 */
int _rec_uno(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if((i * i) > n)
		return (-1);
	else
	{
		return (_rec_uno(n, i + 1));
	}
}


/**
 *_sqrt_recursion - print the nartural square root of a number
 *@n: the int
 *-----------------------------------------------------
 *return: int
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (_rec_uno(n, 1));
}
