#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * No return
 */

void print_alphabet_x10(void)
{
	int times;
	char letter;

	for (times = 0; times < 10; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
