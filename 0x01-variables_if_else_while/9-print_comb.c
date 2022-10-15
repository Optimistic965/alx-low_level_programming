#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* (short description bout main)
* Return: 0
*/
int main(void)
{
int i;
i = 0;
for (; i < 10; i++)
{
for (; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
