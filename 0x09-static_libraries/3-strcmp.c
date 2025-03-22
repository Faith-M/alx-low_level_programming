#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

/**
 * _strcmp - Compares two things
 * @s1: first object
 * @s2: second object
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (0);
}
