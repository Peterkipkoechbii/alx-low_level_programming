#include "stdio.h"

/**
 * main - prints sum of all miltiples of 3 0r 5 up to 1024
 * Return: Always Success
*/
int main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%ld/n", z);
return (0);
}
