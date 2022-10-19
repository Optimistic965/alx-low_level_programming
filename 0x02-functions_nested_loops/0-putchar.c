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

	while (i < 0)
	{
		char result = _putchar(charater[i]);
		printf("%c", result);
		i++;
	}
	char newline = _putchar('\n');
	printf("%c", newline);
	return (0);
}
