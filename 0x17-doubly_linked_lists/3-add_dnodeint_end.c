#include "lists.h"

/**
 * add_dnodeint_end - A program that adds a new node at the end
 * of a dlistint_t list
 *
 * @head: Head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hed;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	hed = *head;

	if (hed != NULL)
	{
		while (hed->next != NULL)
			hed = hed->next;
		hed->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = hed;

	return (new);
}
