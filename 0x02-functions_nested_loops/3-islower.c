#include "main.h"

/**
* _islower - prints lowercase
* @c: lower case character
*
*Return: return 0 for success
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
