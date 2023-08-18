#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Element to be added.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newElement;

    newElement = malloc(sizeof(dlistint_t));
    if (newElement == NULL)
    {
        return (NULL);
    }
    newElement->n = n;
    newElement->prev = NULL;
    newElement->next = *head;
    if (*head != NULL)
    {
	    (*head)->prev = newElement;
    }
    *head = newElement;
    return (newElement);
} 
