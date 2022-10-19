#include <stdio.h>
#include "main.h"

/**
 * main - entry to the function
 * (this program print _putchar)
 * Return: thus return 0
 */
int main(void)
{
	char charater[9] = "_putchar";
	int i = 0;

	while (i < 10)
	{
		char result = _putchar(charater);
		
		printf("%c", result);
		i++;
	}
	printf("\n");
	return (0);
}
