#include <stdio.h>

/**
 * main - main function
 * @argc: arguent count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int arg_num = argc - 1;

	printf("%d arguents were recieved from %s\n", arg_num, argv[0]);
	return (0);
}
