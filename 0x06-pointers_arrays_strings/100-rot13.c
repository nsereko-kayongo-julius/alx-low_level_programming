#include "main.h"

/**
 * *rot13 -  encodes rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int count = 0, a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(str + count) == alphabet[a])
			{
				*(str + count) = rot13[a];
				break;
			}
		}
		count++;
	}

	return (str);
}
