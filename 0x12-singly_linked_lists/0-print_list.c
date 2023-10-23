#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all elements of a node
 * @h: head
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while(h != NULL)
	{
		n++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%ld] %s\n",strlen(h->str), h->str);
		}
		h = h->next;
	}
	return (n);
}
