#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all data in a dlistint_t linked list.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;
	
	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return total_sum;
}
