#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: write  a message
 * Return: Always returns 1 to indicate an error occurred
 */
int main(void)
{
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, 59);
    return (1);
}
