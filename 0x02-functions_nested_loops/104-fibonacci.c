#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by comma and space
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2);

	for (int count = 3; count <= 98; ++count)
	{
		next_fib = fib1 + fib2;

		printf(", %lu", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
