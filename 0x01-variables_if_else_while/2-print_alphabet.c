#include <stdio.h>

/**
 * main - Prints a program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
