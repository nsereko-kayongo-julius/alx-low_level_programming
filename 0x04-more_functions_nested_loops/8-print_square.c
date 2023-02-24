#include "main.h"

/**
 * print_square - print square
 * @size: square size
 *
 */

void print_square(int size)
{
	int x;
	int j;

	for (x = 1; x <= size; x++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');


		_putchar('\n');
	}

	if (x <= 0)
		_putchar('\n');
}
