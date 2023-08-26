#include "lists.h"

/**
 * add_dnodeint - A program taht adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: Head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hed;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	hed = *head;

	if (hed != NULL)
	{
		while (hed->prev != NULL)
			hed = hed->prev;
	}

	new->next = hed;

	if (hed != NULL)
		hed->prev = new;

	*head = new;

	return (new);
}
