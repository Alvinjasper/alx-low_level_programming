#include "main.h"
#include <stdio.h>

/**
 * prints_array - prints n elements of an array
 * @a: an array
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)
		printf("%d", a[t]);
		if (t == n - 1)
			printf("%d", a[n - 1]);

	printf("/n");
}
