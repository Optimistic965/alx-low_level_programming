#include "main.h"

/**
 * print-last-digit - this prints the last digit of an number
 * @n: the number to get it's last digit
 * Return: this returns the last digit of the argument
 */
int print_last_digit(int n)
{
	int last_digit;
	int supp;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	supp = last_digit;
	return (last_digit supp);
}
