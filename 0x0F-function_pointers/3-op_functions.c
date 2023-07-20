#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the addition result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division result.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the modulo result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
