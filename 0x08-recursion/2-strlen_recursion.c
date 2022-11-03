#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - count the munber of characters
 *  in a string recursively.
 *  @s: string to be counted.
 *  Return: number of string.
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}

	return (len);
}
