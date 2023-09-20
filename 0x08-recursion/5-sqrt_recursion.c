#include "main.h"
/**
 * _sqrt_recurs - check the square
 * @a: first number
 * @b: second number
 *
 * Return: -1 or sqrt of b
 */

int _sqrt_recurs(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_sqrt_recurs(a + 1, b));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: number
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt_recurs(1, n));
}
