#include "lists.h"

/**
* free_listint - A function that frees a list
* @head: Head or beginning of listint
*/

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
