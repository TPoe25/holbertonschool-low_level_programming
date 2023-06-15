#include "main.h"
#include <stdio.h>
/**
 * support_function - caluclating
 * @num: input
 * @root: input
 * Return: helper
 */
int support_function(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
		return (support_function(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (support_function(n, 0));
}
