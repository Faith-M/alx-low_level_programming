#include "main.h"
#include <stdio.h>
#include <float.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * Return: Void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
