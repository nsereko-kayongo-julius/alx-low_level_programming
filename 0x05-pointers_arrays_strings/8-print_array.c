#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the data of an array
 * @a: the pointer to  data
 * @n: times to print data
 */

void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);

		if (j < n - 1)
			printf(", ");

		j++;

	}

	putchar('\n');

}
