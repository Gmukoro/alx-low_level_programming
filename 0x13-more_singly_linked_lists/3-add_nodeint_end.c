#include "lists.h"

/**
* *add_nodeint_end - A program that adds a node at the end of a list
* @head: Head of list or beginning of list
* @n: Numbers of nodes
*
* Return: Address of newnode otherwise 0
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temporary = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (0);
	newnode->n = n;
	newnode->next = 0;
	if (*head == 0)
	{
		*head = newnode;
		return (newnode);
	}
	while (temporary->next)
		temporary = temporary->next;

	temporary->next = newnode;

	return (newnode);
}
