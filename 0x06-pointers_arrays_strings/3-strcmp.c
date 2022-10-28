#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - similar to the string comparisim string function
 * (short description bout the function)
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: this return an int
 */

int _strcmp (char *s1, char *s2)
{
	int result = strcmp(s1, s2);
	return result;
}
