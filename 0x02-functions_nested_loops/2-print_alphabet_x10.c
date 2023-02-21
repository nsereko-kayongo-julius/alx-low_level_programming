#include "main.h"

/**
* print_alphabet_x10 - print 10x alphabet
*
* Return: return 0 for succes
*/

void print_alphabet_x10(void)
{
	int j, i = 0;

	while (i <= 10)
	{

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
}
