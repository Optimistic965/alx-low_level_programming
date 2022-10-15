#include <stdio.h>

/**
 * main -- always teh entry point
 * (short description bout what the function does)
 * Return: always return 0
 */
int main(void)
{
	char loww = 'a';
	char upp = 'A';
	for (; loww <= 'z'; loww++)
	{
		putchar(loww);
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
