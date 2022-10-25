#include <stdio.h>
#include "main.h"

/**
 * swap_int - it swaps to values
 * ( the function swaps to values for them selves)
 * @a: first parameter
 * @b: second parameter
 * Return: returs void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
