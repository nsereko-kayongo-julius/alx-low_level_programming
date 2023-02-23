#include "main.h"

/**
* _isdigit - checks for a digit
* @c: digit to be checked
*
* Return: return 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 &&  c < 58)
		return (0);
	else
		return (1);
}
