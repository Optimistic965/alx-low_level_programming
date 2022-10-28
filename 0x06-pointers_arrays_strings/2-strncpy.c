#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy a string
 * ( copy a string nth number of time)
 * @dest: variable to copy into
 * @src: variable to be copied
 * @n: number of char to be copied
 * Return: thus return a copy of outcome
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return dest;
}
