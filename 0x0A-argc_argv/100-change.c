#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	position = total = change = aux = 0;

	if (arg != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);

	return (0);
}
