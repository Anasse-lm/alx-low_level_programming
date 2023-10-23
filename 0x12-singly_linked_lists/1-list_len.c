#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns numbers of nodes
 * @h: head
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while(h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
