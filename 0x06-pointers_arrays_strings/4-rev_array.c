#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
