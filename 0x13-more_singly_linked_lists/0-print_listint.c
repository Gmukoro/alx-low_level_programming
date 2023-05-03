#include "lists.h"

/**
* print_listint - A program that prints all the elements in a list
* @h: list
*
* Return: Number of Nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != 0)
	{
		if (h->n == 0)
			printf("%d %s\n", 0, "(Nil)");
		else
			printf("%d\n",  h->n);

		h = h->next;
		elements++;
	}
	return (elements);
}
