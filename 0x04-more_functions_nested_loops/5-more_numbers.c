#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: Void
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
