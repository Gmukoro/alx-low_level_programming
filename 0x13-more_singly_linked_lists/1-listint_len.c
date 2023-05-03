#include "lists.h"

/**
* listint_len - A function that returns the number of elements in a linked list
* @h: Linked list
*
* Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;
	while (h != 0)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
