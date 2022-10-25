#include <stdio.h>
#include "main.h"

/*
 * reset_to_98 - function to reset variable
 * (reset the value of a pointer to 98)
 * *n: is a pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;

	printf("%d", *n);
}
