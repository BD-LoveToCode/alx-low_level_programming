#include "main.h"

/**
 * times_table - print 9 times table
 */

int times_table(void)
{
	int num, multiply, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multiply;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) * '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
