#include "main.h"

/**
* puts_half - prints half of the string
* @str: string to divide
*/

void puts_half(char *str)
{
	int i, length = 0;
	int start = length / 2;

	while (*(str + length) != '\0')
		length++;


	if (length % 2 == 1)
		start = (length - 1) / 2;

	for (i = start; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');

}
