#include "main.h"

/**
* _isdigit - checks for a digit
* @c: digit to be checked
*
* Return: return 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
		return (0);
	else
		return (1);
}
