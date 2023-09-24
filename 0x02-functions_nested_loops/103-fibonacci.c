#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next_term;
	long int sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		next_term = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_term;
	}
	printf("%ld\n", sum);
	return (0);
}
