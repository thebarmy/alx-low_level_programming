#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x
 * @x: first number
 * @y: second number
 *
 * Return: returns the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
