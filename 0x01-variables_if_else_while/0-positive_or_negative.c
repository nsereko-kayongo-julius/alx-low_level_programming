#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - print out put
*
* Return: 0 for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive %d",n);
	}
	else if (n < 0)
	{
		printf("is negative %d",n);
	}
	else
	{
		printf("is zero %d",n);
	}
	return (0);
}
