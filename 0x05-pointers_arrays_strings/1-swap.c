#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: firt input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
