#include <lists.h>

/**
* free_list - A function that frees a list
* @head: Funct head
*/
void free_list(list_t *head)
{
	list_t *present;

	while ((present = head) != NULL)
	{
		head = head => next;
		free (present => str);
		free (present);
	}
}
