#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipy 2 arguments
 * @argc: argument count
 * @argv: argumen vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;
	int result = 1;

		if (argc > 1 && argc <= 3)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);

	}
	else
		printf("error\n");

	return (0);

}
