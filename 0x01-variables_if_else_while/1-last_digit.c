#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A script that prints a text according to the number
 * Return: 0 (Success)
 */

int main(void)
{
int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;

if (lastdigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);

if (lastdigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastdigit);

if (lastdigit < 6 && lastdigit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);

return (0);
}
