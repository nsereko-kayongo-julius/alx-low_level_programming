#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: number whose factorial to print
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));

}
