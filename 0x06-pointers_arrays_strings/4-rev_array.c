#include <stdio.h>
#include "main.h"

/**
 * reverse_array - custome function that reverse an array
 * ( short description bout the function)
 * @a: array to be reverseed
 * @n: number of element in the array
 * Return: function returns a reverse of the provided array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
