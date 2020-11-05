#include "lists.h"
/**
 * free_listint - free a linky list
 * @head: reference
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	listint_t *iterator = NULL;
		while (head->next != NULL)
		{
			iterator = (head);
			head = iterator->next;
			free(iterator);
		}
	free(head);
}
