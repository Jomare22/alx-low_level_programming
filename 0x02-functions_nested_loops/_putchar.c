#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * Return: 0 (Success) -1 (Error)
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

