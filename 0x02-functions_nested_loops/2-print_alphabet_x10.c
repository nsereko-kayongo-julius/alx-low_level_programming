#include "main.h"

/**
* main - print 10x alphabet
*
* Return: return 0 for succes
*/

int main(void)
{
	int i = 0, int j;

	while (i <= 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
	return (0);
}
