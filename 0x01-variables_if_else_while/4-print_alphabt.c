#include <stdio.h>

/**
 * main - entry point
 * Description: This program uses a loop to iterate through the lowercase
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	if (letter != 'q' && letter != 'e')
	putchar(letter);

	putchar('\n');

	return (0);
}
