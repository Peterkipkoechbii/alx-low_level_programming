#include "main.h"

/*
 * swap_int -swaps value of two integers
 * @a: value to be swapped
 * @b: value to be swapped
*/

void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
