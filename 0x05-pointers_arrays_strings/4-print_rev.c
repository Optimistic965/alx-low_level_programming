#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse the srting been provided
 * ( takes in a strng pointer as argument and reverses the string)
 * @s: string to be reverse
 * Return: thus return void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c\n", s[i]);
	}
}
