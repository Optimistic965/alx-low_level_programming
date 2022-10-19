#include "main.h"

/**
 * main - entry to the function
 * (this program print _putchar)
 * Return: thus return 0
 */
int main(void)
{
	char wrd[] = "_putchar";
	char line[] = "\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(wrd[i]);
		i++;
	}

	_putchar(line[]);
	return (0);
}
