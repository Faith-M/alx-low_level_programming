#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Code prints if number is positive, zero, or negative
 * Return: 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive", n);

if (n == 0)
printf("%d is zero", n);

if (n < 0)
printf("%d is negative", n);

return (0);
}
