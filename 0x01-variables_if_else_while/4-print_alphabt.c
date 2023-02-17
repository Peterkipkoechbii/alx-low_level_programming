#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main -entry point
 * return 0
*/

int main(void)

{ 
	char e, low, q;

	e = 'e';
	q = 'q';
	 
	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low !=q)
	putchar(low);
	}
	putchar('\n');
	return (0);
