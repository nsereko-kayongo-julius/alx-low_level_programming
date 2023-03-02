#include "main.h"
/**
 * *string_toupper - changes all lower cases of  astring to uppercase
 * @s: The string to change
 *
 * Return: the changed upper string
 */

char *string_toupper(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
	}

	return (s);
}
