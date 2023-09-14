#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int num = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int result = 0;

	if (num < 0)
	{
		printf("0\n");
		return 0;
	}

	for (int j = 0; j < 5 && num > 0; j++)
	{
		result += num / coins[j];
		num %= coins[j];
	}

	printf("%d\n", result);
	return 0;
}

