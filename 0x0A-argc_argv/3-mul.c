#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted
 */
int _atoi(char *s)
{
	int i, j, k, l, m, d;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	d = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (d % 2)
				d = -d;
			k = k * 10 + d;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);

	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 ( Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3  || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
