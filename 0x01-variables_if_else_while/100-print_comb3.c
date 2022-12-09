#include <stdio.h>

/**
 * main - Function
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
int j, i;

for (j = 48; j <= 56; j++)
{
for (i = 49; i <= 57; i++)
{
if (i > j)
{
putchar(j);
putchar(i);
if (j != 56 || i != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
