#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - A program that Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * otherwise - The number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *x;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	x = (head->next)->next;

	while (x)
	{
		if (t == x)
		{
			x = head;
			while (t != x)
			{
				nodes++;
				t = t->next;
				x = x->next;
			}
			t = t->next;
			while (t != x)
			{
				nodes++;
				t = t->next;

			}
			return (nodes);
		}
		t = t->next;
		x = (x->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
