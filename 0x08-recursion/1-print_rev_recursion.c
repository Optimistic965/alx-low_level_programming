#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char s = *s;
	int len = strlen(s);
	int x = len - 1;
	
	if ( x < 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[x]);
	x--;
	_print_rev_recursion(s[x]);
}
