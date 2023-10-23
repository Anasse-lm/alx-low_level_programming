#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of parameters
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		int (*f)(int a, int b);

		f = get_op_func(argv[2]);
		if (f == NULL)
		{
			printf("Error\n");
			return (99);
		}
		printf("%d\n",f(num1, num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
