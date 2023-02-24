#include <stdio.h>

/**
* main - prnint fizzbuzz
*
* Return: return 0 for success
*/

int main(void)
{

	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");

		else if (num % 3 == 0)
			printf("Fizz");

		else if (num % 5 == 0)
			printf("Buzz");

		else
			printf("%d", num);

		printf(" ");
	}
	printf("\n");

	return (0);
}
