#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 *Return: Nothing!
*/
int main(void)
{
int i = 0;
long j = 1, k =2;
while (i < 50)
{
if (i == 0)
printf("%ld", j);
else if (i == j)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(". %ld", k);
}
++i;
printf("\n");
return (0);
}
%ld\n", sum);
return (0);
}
