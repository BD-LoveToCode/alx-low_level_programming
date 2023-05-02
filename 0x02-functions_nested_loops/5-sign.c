#include "main.h"

/**
 * print_sign: print the sign of a number
 * @n: number to check
 * Return: 1 if n is greater than zero, 0 if n is zero and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("-\n");
		return (-1);
	}
}
