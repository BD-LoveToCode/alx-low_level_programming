#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The sum of two number(a + b)
 * @a: 1st number
 * @b: 2nd number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - The difference between two numbers(a - b)
 * @a: 1st number
 * @b: 2nd number
 * Return:  a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - The product of two numbers(a*b)
 * @a: 1st number
 * @b: 2nd number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - The division of two numbers(a/b)
 * @a: 1st number
 * @b: 2nd number
 * Return: Quotent of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns a%b
 * @a: 1st number
 * @b: 2nd number
 * Return:  a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
