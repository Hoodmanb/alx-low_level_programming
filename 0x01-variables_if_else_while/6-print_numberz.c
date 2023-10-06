#include <stdio.h>

/**
 * main - entry point
 * Description: uses putchar only twice to print all single-digit numbers
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	putchar(number + '0');

	putchar('\n');

	return (0);
}
