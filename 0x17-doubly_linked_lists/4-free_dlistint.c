#include "lists.h"
#include <stdlib.h>

/*
 * free_dlistint - Frees a dlistint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	
	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
