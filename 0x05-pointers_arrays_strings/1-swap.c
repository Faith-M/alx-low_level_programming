#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
