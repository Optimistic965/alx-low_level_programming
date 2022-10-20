#include "main.h"

/**
 * main - entry into the program
 * (it's a test program, checks if the return
 * of the fnctino is true)
 * Return: thus return 0
 */
int main(void)
{
	int i = 0;
	char test[9] = "0 is zero";
	char result = positive_or_negative(i);

	if (result == test)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return(0);
}
