#include "main.h"
#include <stdio.h>


/**
 * swap_int - swaps the value of two integers
 * @a: int variable
 * @b: int variable
 * return: return 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
