#include "main.h"
#include <limits.h>
/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
