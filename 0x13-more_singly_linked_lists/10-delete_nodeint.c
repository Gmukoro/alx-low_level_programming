#include "lists.h"

/**
* delete_nodeint_at_index - A function that deletes the node at an index
* @head: ....
* @index: Index of node to be deleted
*
* Return: 1 if deleted and -1 if otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;

	listint_t *pnode = NULL;

	unsigned int ind = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}
	while (ind < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		ind++;
	}

	pnode = temporary->next;
	temporary->next = pnode->next;
	free(pnode);
	return (1);
}
