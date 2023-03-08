#include "main.h"

/**
 * _pow_recursion - prints avalue raised to apower
 * @x: value
 * @y: power
 * Return: 1 for success
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));
}
