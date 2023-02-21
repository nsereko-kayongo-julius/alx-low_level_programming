#include "main.h"

/**
* _abs - computes integer value
* @x: parameter
*
*Return: retun 0 for success
*/

int _abs(int x)
{
	int val;

	if (x < 0)
	{

		val = x * -1;

		return (val);
	}

	return (x);
}
