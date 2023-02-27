#include "main.h"
#include <stdio.h>

/*
 * swap_int - swaps the  value of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: Always 0
*/

void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
