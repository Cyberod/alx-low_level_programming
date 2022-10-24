#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint -> adds a node at the beginning of a list
 * @head:  pointer to the first node of the list
 * @n: data of the node or to be inserted
 * Return: pointer to the first node of the list, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link;

	link = malloc(sizeof(listint_t));

	if (!link)
		return (NULL);

	link->n = n;
	link->next = *head;
	*head = link;

	return (*head);
}
