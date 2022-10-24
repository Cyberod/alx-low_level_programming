#include <stdio.h>
#include "lists.h"
/**
 * listint_len -> prints the number of elements of a linked list
 * @h: pointer to the first node of the list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
