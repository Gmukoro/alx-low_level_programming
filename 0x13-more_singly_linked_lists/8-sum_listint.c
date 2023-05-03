#include "lists.h"

/**
* sum_listint - A function that returns the sum of all the data(n) of a list
* @head: Head or beginning of a linked list
*
* Return: Sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
