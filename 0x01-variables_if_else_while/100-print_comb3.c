#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int ones, tens;

	for (ones = 0; ones <= 9; ones++)
	{
		for (tens = ones + 1; tens <= 9; tens++)
		{
			putchar(ones + '0');
			putchar(tens + '0');
			if (tens != 8 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
