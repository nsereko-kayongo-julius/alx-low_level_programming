#include "main.h"

/**
* puts_half - prints half of the string
* @str: string to divide
*/

void puts_half(char *str)
{
	int i, start, length = 0;

	while (*(str + length) != '\0')
		length++;

	start = length / 2;
	if (length % 2 == 1)
		start = (length - 1) / 2;

	for (i = start; i < length; i++)
		_putchar(*(str + i));

	_putchar('\n');

}
