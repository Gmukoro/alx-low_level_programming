#include "lists.h"

/**
* print_list - A program that prints all elements of a list_t
* @h: List of elements in singly list
*
* Return: Elements
*/

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d]%s\n", 0, "(nil)");
		else
			printf("[%d]%s\n", h->len, h->str);
		elements++;

		h = h->next;
	}
	return (elements);
}
