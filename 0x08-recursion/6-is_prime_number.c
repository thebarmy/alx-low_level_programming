#include "main.h"

/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: Number
 *
 * Return: 1 if the input integer is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);

}
