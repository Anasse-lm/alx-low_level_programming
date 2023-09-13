#include "main.h"
/**
 * main - Entry point
 *
 * Description: This is main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[]="_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
