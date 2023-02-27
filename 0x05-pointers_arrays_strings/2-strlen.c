#include "main.h"

/**
 * _strlen - string length;
 * @s: string
 *
 * Return: lenghth
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
