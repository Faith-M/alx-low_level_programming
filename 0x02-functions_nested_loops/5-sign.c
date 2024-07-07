#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The character to be printed
 * Return: 1 if n is + and >0, 0 if n=0, and -1 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
