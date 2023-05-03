#include "lists.h"

/**
* *insert_nodeint_at_index - A program that adds a node at a given postion
* @head: Head pointer
* @idx: ...
* @n: ..
* Return: Address of newnode otherwise 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int idxiter;

	listint_t *newnode;

	listint_t *temporary = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode || !head)

		return (0);
	newnode->n = n;
	newnode->next = 0;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (idxiter = 0; temporary && idxiter < idx; idxiter++)
	{
		if (idxiter == idx - 1)
		{
			newnode->next = temporary->next;
			temporary->next = newnode;
			return (newnode);
		}
		else
			temporary = temporary->next;
	}
	return (0);
}
