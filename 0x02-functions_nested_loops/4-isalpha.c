#include "main.h"

/**
* _isalpha - prints alpha digits
* @c: paramete
*r
* Return: always return 0
*/

int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z')
		return (1);
	else
		return (0);
}
