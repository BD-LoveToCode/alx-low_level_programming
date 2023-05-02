#include "main.h"

/**
 * times_table - print 9 times table
 */

void times_table(void)
{
	int num, multiply, product;

	for (num = 0; num < 10; num++)
	{
		for (multiply = 0; multiply < 10; multiply++)
		{
			product = multiply * num;
			if (multiply == 0)
			{
				_putchar(product + '0');
			}

			if (product < 10 && multiply != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
