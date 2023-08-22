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

{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("%d, %d/n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}
