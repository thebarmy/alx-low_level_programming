#include "main.h"

/**
 * is_prime_rec - chcker function
 * @n: Number
 *@i: divisor
 *
 * Return: 1 if the input integer is prime, 0 if not
 */
int is_prime_rec(int n, int i)
{
	if (n < 2)
		return (0);

	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_rec(n, i - 1));

}

/**
 * is_prime_number - returns 1 if the input integer is prime number
 * otherwie 0
 * @n: Number
 *
 * Return: 1 if the input integer, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_rec(n, n / 2));
}
