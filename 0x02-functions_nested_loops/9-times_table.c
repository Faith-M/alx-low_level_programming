#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
				}
			}

			if (product >= 10)
			{
				_putchar('0' + (product / 10)); /* Print tens place*/
			}

			_putchar('0' + (product % 10)); /* Print units place*/
		}

		_putchar('\n');
	}
}
