#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int num = 48;

    while (num <= 57)
    {
        putchar(num);
        if (num != 57)
        {
            putchar(44);
            putchar(32);
        }
        num++;
    }
    putchar('\n');
    return (0);
}

