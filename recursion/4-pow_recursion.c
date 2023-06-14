#include "main.h"

/**
 * _pow_recursion -
 * @x:
 * @y:
 * Return: -1
 */

int _pow_recursion(int x,  int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return ( _pow_recursion(x, y - 1) * x);
	
	return (_pow_recursion(x, y - 1) * x);
}
