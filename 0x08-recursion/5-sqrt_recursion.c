#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 *
 
int _sqrt(int n, int i)
{
int _sqrt = i * i;
if (_sqrt > n)
return (-1);

if (_sqrt == n)
return (i);

return (_sqrt(n, i + 1));
}
*/

int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
