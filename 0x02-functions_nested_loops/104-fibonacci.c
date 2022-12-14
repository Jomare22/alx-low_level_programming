#include <stdio.h>

/**
 * main - fibonacci, the first 98 numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int i;
unsigned long int startnum1 = 1;
unsigned long int startnum2 = 2;
unsigned long int l = 1000000000;
unsigned long int bef1;
unsigned long int bef2;
unsigned long int aft1;
unsigned long int aft2;

printf("%lu", startnum1);
for (i = 1; i < 91; i++)
{
printf(", %lu", startnum2);
startnum2 += startnum1;
startnum1 = startnum2 - startnum1;
}
bef1 = (startnum1 / l);
bef2 = (startnum1 % l);
aft1 = (startnum2 / l);
aft2 = (startnum2 % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + bef1;
bef1 = aft1 - bef1;
aft2 = aft2 + bef2;
bef2 = aft2 - bef2;
}
printf("\n");
return (0);
}
