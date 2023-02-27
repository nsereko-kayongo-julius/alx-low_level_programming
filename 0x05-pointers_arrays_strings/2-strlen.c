#include "main.h"

/**
 * _strlen - string length;
 * @s: string
 *
 * Return: lenghth
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		;
		length++;
	}
	return (length);
}
