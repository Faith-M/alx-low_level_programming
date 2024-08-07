#include <stdio.h>

/**
 * main - Computes the sum of even Fibonacci numbers below 4,000,000
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("%lu\n", sum);

	return (0);
}
