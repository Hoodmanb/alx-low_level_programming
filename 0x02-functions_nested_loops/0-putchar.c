#include "main.h"
/**
 * main - Entry block
 * Description: prints holberton on new line
 * Return: 0
 */
int main(void)
{
char c[10] = "_putchar";

int i = 0;

while (i < 9)
	{
_putchar(c[i]);
i++;
	}
_putchar(stderr,'\n');
return (0);
}
