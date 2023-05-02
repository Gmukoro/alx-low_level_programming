#include "lists.h"

/**
* *add_node_end - A funct that adds a node at the end
* @head: Head of the linked list
* @str: String to be added
*
* Return: Pointer to the head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temporary;
	size_t numchar;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	newnode->len = numchar;
	newnode->next = NULL;
	temporary = *head;

		if (temporary == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (temporary->next != NULL)

				temporary = temporary->next;
			temporary->next = newnode;
		}
	return (*head);
}
