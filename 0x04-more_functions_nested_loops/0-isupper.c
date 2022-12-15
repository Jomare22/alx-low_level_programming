#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: char variable
 * Return: 1 (If uppercase) 0 (Other)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
