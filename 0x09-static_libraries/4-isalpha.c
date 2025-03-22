#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 0 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
