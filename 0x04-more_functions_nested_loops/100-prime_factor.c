#include <stdio.h>

/**
* main - print the gcf
*
* Return: rerturn 0 for success
*/

int main(void)
{

	long int x = 612852475143;
	long int i;

	for (i = 2; i <= x; i++)
	{
		while (x % i == 0)
		{
			x = x / i;
		}

	}

	printf("%ld\n", i - 1);

	return (0);
}
