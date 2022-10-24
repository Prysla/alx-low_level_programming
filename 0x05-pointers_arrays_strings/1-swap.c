#include "main.h"

/**
 * swap_int - swaps the value of two intgesr
 * @a: pointer to first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
