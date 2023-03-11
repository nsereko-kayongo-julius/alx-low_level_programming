#include <string.h>
#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1;
 */

int is_palindrome(char *s)
{

	int length = strlen(s);

	if (length <= 1)
		return (1);

	else
		return ((s[0] == s[length - 1]) &&
is_palindrome(s + 1, length - 2));

}
