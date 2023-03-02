#include "main.h"

/**
 * *_strncat - concat 2 strings
 *@dest: first string
 *@src: second string
 *@n: numbr of bites
 *
 * Return: pointer to resulting destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	while (*(dest + count1) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
