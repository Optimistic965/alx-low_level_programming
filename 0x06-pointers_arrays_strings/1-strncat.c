#include <stdio.h>
#include <string.h>
#include "main.h"

/*
* _strncat - takes in three argument
* ( function joins too strings together n numher of time)
* @dest: destination string
* @src: string to concat
* @n: number of string to join from src
* Return: function returns a char
*/
char *_strncat( char *dest, char *src, int *n)
{
	strncat(dest, src, n);
	return dest;
}
