#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a message
 * Return: Always returns 0 to indicate no error occurred
 */
int main(void)
{
    printf("Size of a char: %ld byte(s)\n", sizeof(char));
    printf("Size of an int: %ld byte(s)\n", sizeof(int));
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of a float: %ld byte(s)\n", sizeof(float));
    return (0);
}

