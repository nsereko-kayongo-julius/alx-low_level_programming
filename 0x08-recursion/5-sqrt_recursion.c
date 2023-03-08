#include "main.h"

/**
 * _sqrt_recursion - calculate the square root
 * @n: number whose sqrt is to be print
 * Return: sqrt if success
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
	{
		sqrt = _sqrt_recursion(n / 2) * 2;
		if (n / sqrt == sqrt)
			return (sqrt);

		else
			return (_sqrt_recursion(n / sqrt));
	}

}

