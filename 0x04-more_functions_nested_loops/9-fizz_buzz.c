#include <stdio.h>

/**
 * main - program that prints either number
 * or fizz or buzz or both
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n++ < 99)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf('\n');
}
