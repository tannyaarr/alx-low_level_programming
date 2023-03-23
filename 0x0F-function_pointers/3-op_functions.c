#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first numer
 * @b: the second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the result of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of the divison of two numbers
 * @a: the first number
 * @b: the second numbers
 * Return: the reminder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
