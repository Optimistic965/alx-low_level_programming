#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - the entry point to the code
 * (It's used to determine if the number
 * generated by the code is positive, 
 * negative or zero)
 * Return: the function return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if(n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}
	return (0);
}
