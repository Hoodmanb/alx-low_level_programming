#include "main.h"
/**
 * _puts - function that takes pointer has argument.
 *
 * @str: pointer argument.
 */

	void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
