#include "main.h"

/**
 * *leet - encodes inot 1337
 * @str: the string to encode
 * Return: encoded string
 */

char *leet(char *str)
{
	int count = 0, a;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(str + count) == lower_letters[a] ||
*(str + count) == upper_letters[a])
			{
				*(str + count) = num[a];
				break;
			}
		}
		count++;
	}

	return (str);
}
