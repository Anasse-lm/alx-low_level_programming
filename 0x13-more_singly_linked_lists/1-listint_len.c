#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns lenght of the node
 * @h: head
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
