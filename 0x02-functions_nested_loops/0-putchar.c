#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 * Description: This is main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char s[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
