#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints the first 98 fibonacci numbers starting from 1 and 2
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%llu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %llu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{	printf("%llu", k1 + (k2 / 1000000000));
		printf("%llu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
