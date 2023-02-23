#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints single character
 * @c: character to print
 *
 * Return: return 1 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
