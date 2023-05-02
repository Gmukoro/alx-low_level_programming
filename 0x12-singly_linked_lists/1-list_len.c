#include "lists.h"

/**
* list_len - A function that returns the numbers of element of a linked list
* @h: Linked list
*
* Return: Numbers of elements
*/

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)

	{
		h = h->next;

		elements++;
	}

	return (elements);

}
