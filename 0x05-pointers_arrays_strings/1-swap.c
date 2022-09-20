#include <stdio.h>
#include "main.h"

/**
 * swap_int - this function swapsthe value of two integers
 * @a: a pointer deference to change value of a
 * @b: pointer deference to change value of b
 * int c: assigning the address ofthe variable to c
 * Return 0 success.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
