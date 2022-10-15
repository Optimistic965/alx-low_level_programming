#include <stdio.h>
/**
 * main -- always the entry point into the program
 * (short description bout the program)
 * Return: returns 0
 *
*/
 int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	
	putchar('\n');
	return (0);
}
