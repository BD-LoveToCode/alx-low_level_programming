#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Sum of all paramter
 * @n: The number of paramters
 * @...: A variable number of parameter for sum calculation
 * Return:  parameters sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;


	va_start(ap, n);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
