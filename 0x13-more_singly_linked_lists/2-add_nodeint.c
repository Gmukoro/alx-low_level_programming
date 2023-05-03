#include "lists.h"

/**
* *add_nodeint - A function that adds nodes at the beginning of a list
* @head: Head of the linked list
* @n: Number of elements
*
* Return: New node address otherwise 0
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;


	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (0);


	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
