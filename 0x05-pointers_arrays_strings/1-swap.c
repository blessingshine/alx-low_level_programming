#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: one of the integers whose value is to be swaped
 *
 * @b: the second integer whose value is to be swaped
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
