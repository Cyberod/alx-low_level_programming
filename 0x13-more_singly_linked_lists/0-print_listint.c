#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint -> prints all the element of the lsit
 * @h: param pointer
 *
 * Return: number of list and their values
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
