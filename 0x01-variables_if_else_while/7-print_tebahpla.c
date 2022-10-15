#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * (short description bout main)
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
