#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenate two strings
 *  (short description bout the function)
 *  @dest: varibale to be modified
 *  @src: variable to be concated
 *  Return: this return a charater been modified 
 */

char *_strcat(char *dest, char *src)
{
	*dest = strcat( dest, src);

	return ( dest);
}
