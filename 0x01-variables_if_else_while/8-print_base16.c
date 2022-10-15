#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * (short description bout main)
 * Return: 0
 */
int main(void)
{
int c;
char a;
for (c = 0; c < 10; c++)
{
putchar((c % 10) + '0');
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
