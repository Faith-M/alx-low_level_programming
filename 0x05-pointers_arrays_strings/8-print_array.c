#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: First integer
 * @n: Seconf integer
 * Return: Void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
