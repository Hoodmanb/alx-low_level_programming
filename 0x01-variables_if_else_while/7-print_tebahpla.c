#include <stdio.h>

/**
 * main - entry point
 * Description: uses putchar twice to print the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
