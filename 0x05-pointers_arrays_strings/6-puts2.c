#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: pointer argument
 *
 */

void puts2(char *str)

{
	int len = 0;

	while (str[len] != '\0')

	{
		if (len % 2 == 0)

		{
			_putchar(str[len]);
		}

		len++;
	}
}
