#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: element to be added
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_element;
		new_element->prev = current;
    	}
    	return (new_element);
}
