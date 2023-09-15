#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: first number
 * @b: second number
 *
 * Return: sum of a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference
 * @a: first number
 * @b: second number
 *
 * Return: diff of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: first number
 * @b: second number
 *
 * Return: product of a & b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division
 * @a: first number
 * @b: second number
 *
 * Return: quotient of a & b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulo
 * @a: first number
 * @b: second number
 *
 * Return: modulo of a & b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
