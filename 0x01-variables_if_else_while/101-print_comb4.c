#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int ones, tens, hundreds;

	for (ones = 0; ones <= 9; ones++)
	{
		for (tens = ones + 1; tens <= 9; tens++)
		{
			for (hundreds = tens + 1; hundreds <= 9; hundreds++)
			{
				putchar(ones + '0');
				putchar(tens + '0');
				putchar(hundreds + '0');
				if (ones != 7 || tens != 8 || hundreds != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
