#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - printthe number in base 16
 * Return: Always 0
*/

int main(void)
{
int d;
char low;

for (d = '0'; d <= '9'; d++)
putchar(d);

for (low = 'a'; low <= 'f'; low++)
putchar(low);

putchar('\n');
return (0);
}
