#include <stdio.h>
#include "main.h"

/**
 * main - fuction that prints the number of arguments passed into it
 * @argc: number of argments
 * @argv: array of arguments
 *
 * Return: Always 0 ( Success).
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
