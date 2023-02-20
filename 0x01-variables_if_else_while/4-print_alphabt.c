#include <stdio.h>

/**
 * main - prints alpha in lower
 * followed by a new line, except q and e
 * Return: Always 0
*/

int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
putchar('\n');
return (0);
}
