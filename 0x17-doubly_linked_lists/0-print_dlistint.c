#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - A function print all the elements of a
 * dlistint_t list
 * @h: A pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
