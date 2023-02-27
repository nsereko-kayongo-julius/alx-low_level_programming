#include "main.h"

/**
* _puts - print a string
* @str: string to print
*/

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}

	_putchar('\n');
}
