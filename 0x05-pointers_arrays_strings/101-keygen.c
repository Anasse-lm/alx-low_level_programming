#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, nbr;

	srand(time(NULL));
	for (i = 0; i < 15; i++)
	{
		nbr = (rand() % 93) + 32;
		printf("%c", nbr);
	}
	printf("\n");
	return (0);
}
