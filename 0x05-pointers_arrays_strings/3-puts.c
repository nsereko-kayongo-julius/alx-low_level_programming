#include "main.h"

/**
* _puts - print a string
* @str: string to print
*/

void _puts(char *str)
{
	int s;

	for (str[s] = 0; str[s] != '\0'; s++)
		_putchar(str[s]);

	_putchar('\n');
}
