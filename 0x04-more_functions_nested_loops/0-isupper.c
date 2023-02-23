#include "main.h"

/**
* _isupper - prints uppercase characters
* @c: character
*
* Return: returns 0 otherwise
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
