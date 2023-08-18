#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node 
 * @h: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node will be added
 * @n: added element
 *
 * Return: address of the new node or NULL on failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	dlistint_t *tmp = *h;
	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
    
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
