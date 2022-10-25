#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse the srting been provided
 * ( takes in a strng pointer as argument and reverses the string)
 * @s: string to be reverse
 * Return: thus return void
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
