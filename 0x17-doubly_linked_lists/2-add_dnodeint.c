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
    dlistint_t *newElement; // New node to be added.

    newElement = malloc(sizeof(dlistint_t)); // Allocate memory for the new node.

    if (newElement == NULL)
        return (NULL); // Return NULL if memory allocation failed.

    newElement->n = n; // Assign the value to the new node.
    newElement->prev = NULL; // Initialize the previous pointer of the new node.
    newElement->next = *head; // Set the next pointer of the new node to the current head.

    if (*head != NULL)
        (*head)->prev = newElement; // If the list is not empty, set the previous pointer of the current head.

    *head = newElement; // Update the head to point to the new node.
    return (newElement); // Return the address of the new node.
} 
