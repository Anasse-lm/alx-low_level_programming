#include "main.h"

/**
 * print_to_98 - prints all natural nums of form n to 98.
 * @n: number
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		if (n < 0)
		{
			n = -n;
			for (i = n; i > 0; i--)
			{
				_putchar('-');
				if (i >= 100)
				{
					_putchar((i / 100) + '0');
					_putchar(((i / 10) % 10) + '0');
				}
				if (i >= 10 && i < 100)
				{
					_putchar((i / 10) + '0');
				}
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			for (i = 0; i <= 98; i++)
			{
				if (i >= 10)
				{
					_putchar((i / 10) + '0');
				}
				_putchar((i % 10) + '0');
				if (i < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		for (i = n; i <= 98; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
			}
			if (i >= 10 && i < 100)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
