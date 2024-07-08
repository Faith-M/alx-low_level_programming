#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The digit to be printed
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	putchar('0' + last_digit);

	return (last_digit);
}
