#include "lists.h"

/**
* *get_nodeint_at_index - A function that returns a specific node index
* @head: The pointer to the head or beginning a linked list
* @index: ...
* Return: ....
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexnum = 0;

	listint_t *temporary = head;

	while (temporary && indexnum < index)
	{
		temporary = temporary->next;
		indexnum++;
	}
	return (temporary ? temporary : 0);
}
