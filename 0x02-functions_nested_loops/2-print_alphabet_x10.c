#include "main.h"

/**
*  _islower - print 10x alphabet
* @c: parameter
*
* Return: return 0 for succes
*/

int _islower(int c)
{
	int j, i = 0;

	while (i <= 10)
	{

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
	return (0);
}
