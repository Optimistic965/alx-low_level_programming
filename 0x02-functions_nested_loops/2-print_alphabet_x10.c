#include "main.h"

/**
 * print_alphabet_x10 - print an alpahbet 10 times
 * (short description bout function)
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	
	for (int i = 0; i < 10; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	}
}