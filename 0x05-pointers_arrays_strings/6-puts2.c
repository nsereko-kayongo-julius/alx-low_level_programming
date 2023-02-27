#include "main.h"

/**
 * puts2 - prints every character
 * @str: the string
 */

void puts2(char *str)
{

	int a;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}

	_putchar('\n');
}
