#include "function_pointers"
#include <stdlib.h>

/**
 * op_add - adds intergers
 * @a: 1st
 * @b:2nd
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts intergers
 * @a: 1st
 * @b: 2nd:
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies intergers
 * @a: 1st
 * @b: 2nd
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides ints
 * @a: int
 * @b: int
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod ints
 * @a: int
 * @b: int
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
