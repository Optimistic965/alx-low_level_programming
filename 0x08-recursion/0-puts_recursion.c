#include "main.h"

/**
 * _puts_recursion - print string to standard output
 * @s: pointer to the string variable
 * Return: it's a void function
 */

void _puts_recursion(char *s)
{
	if(s == "\0")
	{
		_putchar("\n");
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
