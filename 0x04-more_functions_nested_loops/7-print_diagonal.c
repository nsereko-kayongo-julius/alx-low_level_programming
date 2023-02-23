#include "main.h"

/**
 * print_diagonal - DRAW DIAGONAL
 * @n; nuber o fdiagonals
 */

void print_diagonal(int n)
{

	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');

		for(j = 1; j <= i; j++)
			_putchar('\\');

	}

	_putchar('\n');
}
