#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: text file
 * @letters: numbers of letters it should print or read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f = fopen(filename, "r");
	size_t rchar, wchar;
	char *text;

	if (f == NULL)
	{
		fclose(f);
		return (0);
	}
	text = (char*)malloc(letters);

	if (text == NULL)
	{
		fclose(f);
		return (0);
	}
	rchar = fread(text, 1, letters, f);

	if (rchar <= 0)
	{
		free(text);
		fclose(f);
		return (0);
	}
	wchar = fwrite(text, 1, rchar, stdout);

	if (wchar != rchar)
	{
		free(text);
		fclose(f);
		return (0);
	}
	free(text);
	fclose(f);
	return (wchar);
}
