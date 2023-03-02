#include "main.h"

/**
 * *cap_string - capitalize all strings
 * @str: string to capitalise
 *
 * Return: the capitaliced string
 */

char *cap_string(char *str)
{
	int count = 0, a;
	int words_spr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + count) >= 97 && *(str + count) <= 122)
		*(str + count) = *(str + count) - 32;
	count++;
	while (*(str + count) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(str + count) == words_spr[a])
			{
				if ((*(str + (count + 1)) >= 97) && (*(str + (count + 1)) <= 122))
					*(str + (count + 1)) = *(str + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (str);
}
