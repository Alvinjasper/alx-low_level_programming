#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Annoying
 * Return : Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d \n", n, a);
	if (n > 5)
	{
		printf(" and is greater than 5");
	}
	if (a == 0)
	{
		printf(" and is 0");
	}
	if (a < 6 && x != 0)
	{
		printf(" and is less than 6 and not 0")
	}
	printf("\n")
	return (0);
}

