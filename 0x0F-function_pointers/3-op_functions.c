#include "calc.h"
#include <stdio.h>
/**
 * op_add - + operator
 * @a: num1
 * @b: num2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - - operator
 * @a: num1
 * @b: num2
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - * operator
 * @a: num1
 * @b: num2
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - / operator
 * @a: num1
 * @b: num2
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - % operator
 * @a: num1
 * @b: num2
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
