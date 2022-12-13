#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * Return: 1 (Success) 0 (Fail).
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
