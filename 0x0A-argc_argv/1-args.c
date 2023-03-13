#include <stdio.h>

/**
 * main - main function
 * @argc: arguent count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int arg_num;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (arg_num = 0; *argv; arg_num++, argv++)
			;

		printf("%d\n", arg_num - 1);
	}

	return (0);

}
