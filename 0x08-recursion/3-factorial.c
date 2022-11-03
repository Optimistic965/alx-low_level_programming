#include "main.h"

/**
 * factorial - calculates teh factorial of a given positibe int
 * @n: number to get it's factorial
 * Return: an int is returned
 */

int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	res = n * factorial(n - 1);

	return (res);
}
