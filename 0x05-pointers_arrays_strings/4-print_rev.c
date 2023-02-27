#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != 0)
	{
		x++;
	}

	while (x > 0)
	{
		x--;
		_putchar(s[x]);

	}
	_putchar('\n');

}
