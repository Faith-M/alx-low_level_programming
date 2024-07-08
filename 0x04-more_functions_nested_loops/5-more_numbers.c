#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: Void
 */

void more_numbers(void)
{
	int num, times;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
			{
			_putchar(num + '0'); /*Prints the single digits*/
			}
			else
			{
				_putchar('1'); /*Print 1 for numbers 10 to 14*/
				_putchar(num % 10 + '0'); /*Prints the unit digits of 10 to 14*/
			}
		}
		_putchar('\n');
	}
}
