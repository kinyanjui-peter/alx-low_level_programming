#include "lists.h"

/**
 * dlist_length - Counts the number of elements in a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
*/
size_t dlist_length(const dlistint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
