#include "main.h"

/**
 * swap_int - swaps the values of two different integers
 * @a: first integer
 * @b: second integer
 * @tmp: randomly named variable
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
