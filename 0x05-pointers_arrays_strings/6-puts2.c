#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * 
 * @str: string parameter
 * 
 */
void puts2(char *str)
{
int length = 0;
int track = 0;
char *p = str;
int i;

while (*p != '\0')
{
p++;
length++;
}
track = length - 1;
for (i = 0 ; o <= track ; o++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
