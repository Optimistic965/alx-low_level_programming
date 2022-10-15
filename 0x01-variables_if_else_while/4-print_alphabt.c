#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * (short description bout the function)
 * Return: 0
 */
int main(void)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
{
if (ch == 'e')
{
continue;
}
else if (ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
