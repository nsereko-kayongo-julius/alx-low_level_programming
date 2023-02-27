#include "main.h"

/**
 * *_strcpy - copies the string
 *@dest: pointer to dest
 *@src: string to copy
 *
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int a;

	while (src[n] != '\0')
		n++;

	a = 0;

	while (i <= n)
	{
		dest[a] = src[a];
		a++
	}

	a = a;

	while (a <= n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
