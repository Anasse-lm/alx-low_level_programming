#include "main.h"

/**
 * print_diagonal - prints \ in digonal
 * @n: length
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j, x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= x; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
}
