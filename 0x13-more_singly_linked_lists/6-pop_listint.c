#include "lists.h"

/**
* pop_listint - A program that deletes the headnode of a linked list
* @head: ...
* Return: ....
*/

int pop_listint(listint_t **head)
{
	listint_t *temporary;

	int newele;

	if (!head || !*head)

		return (0);

	newele = (*head)->n;

	temporary = (*head)->next;

	free(*head);

	*head = temporary;
	return (newele);
}
