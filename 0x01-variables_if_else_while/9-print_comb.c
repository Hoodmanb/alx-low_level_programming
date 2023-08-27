#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');

	if (i < 99)
	putchar(',');
	putchar(' ');

	return (0);
}
