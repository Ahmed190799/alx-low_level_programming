#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps values of two intergers. */
{
	int as = *a;
	*a = *b;
	*b = as;
}
