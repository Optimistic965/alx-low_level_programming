#include "main.h"

/**
 * _abs - function that convert any data type into an int
 * @r - the int to be converted
 * (short description bout what the function does)
 * Return: just return int 0
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = (int)n * -1;
	}
	else
	{
		a = (int) n;
	}
	return (a);
}
