#include "main.h"

/**
 * print_alphabet - entry to the main function
 *( short description bout main)
 *Return: thus return 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
