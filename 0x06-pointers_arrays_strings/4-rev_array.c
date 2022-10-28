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
	int i = 1;

	if( n = i)
	{
		printf("%d", a[n - i]);
	}
	else
	{
		while (i < n)
		{
			printf("%d, ", a[n - i]);
			i++;
		}
	}
}
