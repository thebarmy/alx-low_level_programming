#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;
	int i;
	int (*prog)(int, char **) = &main;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < a; i++)
			printf("%02x%c",
					(unsigned char)*((char *)prog + i), i < a - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
