#include "lists.h"
/**
 * free_listint2 - free
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	while ((*head)->next != NULL)
	{
		c = *head;
		*head = (*head)->next;
		free(c);
	}
	free(*head);
	*head = NULL;
}
