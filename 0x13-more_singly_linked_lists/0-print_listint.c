#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints a list of ints
 * @h: head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while(h != NULL)
	{
		num++;
		printf("%d\n",h->n);
		h = h->next;
	}
	return (num);
}
