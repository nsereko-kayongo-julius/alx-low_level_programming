#include "main.h"

/**
 * puts2 - prints every character
 * @str: the string
 */

void puts2(char *str)
{

	int a = 0, b = 0;

	while (str[a] != '\0')
	{
		;
		a++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b = b + 2;
	}

	_putchar('\n');
}
