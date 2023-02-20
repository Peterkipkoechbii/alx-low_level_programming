#include <stdio.h>

/**
 * main - prints alpha in lower
 * Return: always 0
*/
int main(void)
{
char lowerc;

for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
{
putchar(lowerc);
}
putchar('\n');
return (0);
}

