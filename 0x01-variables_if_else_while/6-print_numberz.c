#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - print single digits in base 10
 * Return: Always 0
*/

int main(void)
{
int d;

for (d = '0'; d <= '9'; d++)
putchar(d);

putchar('\n');
return (0);
}
