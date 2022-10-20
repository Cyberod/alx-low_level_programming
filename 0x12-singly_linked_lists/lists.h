#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s -> singly linked list
 * @str: string -> (memory allocated string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: All prototypes used in the singly linked list directory
 * are contained here and is necessary for successfully
 * compiling the program
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_s;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
