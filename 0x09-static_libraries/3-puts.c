#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>

/**
 * _puts - Prints a string
 * @str: The string
 * Return: Void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
