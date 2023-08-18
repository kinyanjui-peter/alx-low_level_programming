#include "lists.h"

/* get_dnodeint_at_index - Retrieves a node at a specific index in a linked list
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the indexed node, or NULL if index is out of bounds
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	if (head == NULL)
		return NULL;
	if (index == 0)
		return head;
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return NULL;
		head = head->next;
	}
	return head;
}
