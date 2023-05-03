#include "lists.h"


/**
 * free_listint2 - A program that frees a linked list
 * @head: Pointer to head or beginning of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == 0)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = 0;

}
