#include "main.h"

/**
 * main - entry to the function
 * (this program print _putchar)
 * Return: thus return 0
 */
int main(void)
{
	char wrd[] = "_putchar";
	int i = 0;

	while (i < 10)
	{
		_putchar(wrd[i]);
		i++;
	}
	return (0);
}
