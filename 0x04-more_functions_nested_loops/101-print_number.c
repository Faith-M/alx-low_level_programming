#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>

/**
 * print_number - Prints an integer
 * @n: The integer
 * Return: Void
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;
	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) n % 10 + '0');
}
