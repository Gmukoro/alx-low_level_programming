#include "lists.h"

/**
* add_node - A function that adds new node at the begining
* @head: Head of the linked list
* @str: String
*
* Return: The head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	size_t numchar;

	newnode = malloc(sizeof(list_t));

	if (newnode == 0)
		return (NULL);

	newnode->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	newnode->len = numchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
