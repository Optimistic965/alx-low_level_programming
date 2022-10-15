#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
* (short description about the function main)
* Return: 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
