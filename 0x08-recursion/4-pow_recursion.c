#include "main.h"

/**
 * _pow_recursion - get the exponent of a value
 * @x: value to increase
 * @y: number of time to multiple
 * Return: does return an int
 */

int _pow_recursion(int x, int y)
{
	int res;
	
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	res = x * _pow_recursion(x, (y -1));
	return (res);
}
