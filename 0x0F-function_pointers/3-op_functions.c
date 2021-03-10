#include "3-calc.h"

/**
 *op_add - function sum
 *@a: int
 *@b: int
 *
 *Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function resta
 *@a: int
 *@b: int
 *
 *Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function mul
 *@a: int
 *@b: int
 *
 *Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function div
 *@a: int
 *@b: int
 *
 *Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - function mod
 *@a: int
 *@b: int
 *
 *Return: int
 */
int op_mod(int a, int b)
{
	int cal = a % b;

	return (cal);
}
