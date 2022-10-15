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

	while (loww <= 'z' || upp <= 'Z')
	{
		if (loww == 'z')
		{
		putchar(upp);
		upp++;
		}
		else
		{
		putchar(loww);
		loww++;
		}
	}

	putchar('\n');
	return (0);
}
