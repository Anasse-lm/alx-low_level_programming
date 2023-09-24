#include "main.h"
/**
 * times_table - 9 times table
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			if ((i * j) >= 100)
			{
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
			}
			if ((i * j) >= 10 && (i * j) < 100)
			{
				_putchar(((i * j) / 10) + '0');
			}
			_putchar(((i * j) % 10) + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * (j + 1)) < 100 && ((i * (j + 1)) >= 10))
				{
					_putchar(' ');
				}
				if ((i * (j + 1)) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
