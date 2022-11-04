#include <stdio.h>

/**
 * main - entry to the function
 * @argc: argument count
 * @argv: argument vector
 * Return: zero to indicate success
 */

int main(int argc, int* argv[])
{
	int res;
	
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}

	res = argv[1] * argv[2];
	printf("%d\n", res);

	return (0);
}
