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
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('_');
}
