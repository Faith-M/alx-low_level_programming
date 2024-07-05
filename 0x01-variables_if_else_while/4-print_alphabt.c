#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, excluding q & e
 * Return: 0 (Success)
 */

int main(void)
{
char letter;

for (letter =  'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter + '\n');
}

putchar('\n');

return (0);
}

