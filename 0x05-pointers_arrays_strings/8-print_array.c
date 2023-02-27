#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the data of an array
 * @a: the pointer to  data
 * @n: times to print data
 */

void print_array(int *a, int n)
{
	int a = 0;

	while (a < n)
	{
		printf("%d", a[i]);

		if (a < n - 1)
			printf(", ");

		a++;

	}

	_putchar('\n');

}
