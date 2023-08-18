#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *head)
{
	size_t node_count = 0;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		node_count++;
	}
	return node_count;
}
