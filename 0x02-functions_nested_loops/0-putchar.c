#include <stdio.h>
#include "main.h"

/**
 * main - entry to the function
 * (this program print _putchar)
 * Return: thus return 0
 */
int main(void)
{
	char wrd[] = "_putchar";
	int i = 0;

	while (i < 5)
	{
		char result = _putchar(wrd);

		printf("%c", result);
		i++;
	}

	printf("\n");
	return (0);
}
