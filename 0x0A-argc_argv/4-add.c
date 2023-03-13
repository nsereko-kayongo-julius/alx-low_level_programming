#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: argument  count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i, sum = 0,  x;
	char *ptr_end;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			x = strtol(argv[i], &ptr_end, 10);
			if (*ptr_end != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += x;
		}
		printf("%d\n", sum);

	}
	else
		printf("%d\n", 0);

	return (0);

}
