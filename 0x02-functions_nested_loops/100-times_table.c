#include "main.h"
#include <stdio.h>

/**
 * print_spaces - Prints spaces for formatting
 * @result: The current result to format
 */

void print_spaces(int result)
{
	if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (result < 100)
	{
		_putchar(' ');
	}
}

/**
 * print_number - Prints a number with correct formatting
 * @result: The number to print
 */

void print_number(int result)
{
	if (result < 10)
	{
		_putchar(result + '0');
	}
	else if (result < 100)
	{
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
	}
	else
	{
		_putchar(result / 100 + '0');
		_putchar((result / 10) % 10 + '0');
		_putchar(result % 10 + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The multiplication table requested
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				print_spaces(result);
			}

			print_number(result);
		}
		_putchar('\n');
	}
}
