#include "main.h"

/**
 * cap_string - capitalizing words
 * @str: string
 * Return: char *.
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97)
	{
		str[0] -= 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >=97 && str[i + 1] != '\0')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
