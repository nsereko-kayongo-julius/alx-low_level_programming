#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @i: the starting number
 *
 * Return: void
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (i; i <= 98; i++)
		{	print("%d", i);
			if (i == 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (int i; i >= 98; i--)
		{

			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
