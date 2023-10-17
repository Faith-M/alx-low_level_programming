#include "main.h"

if (n < 0 || n > 15)
	return;
	for (in i = 0; i <= n; i++)
{
	for (int j = 0; j <= n; j++)
	{
		int result = i * j;
		if (j == 0)
			printf("%2d", result);
		else
			printf(", %4d", result);
	}
	printf("\n");
}
