#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * _abs - Computes the absolute value of an integer
 * @r: The integer
 * Return: r if positive, and -r if negative
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
