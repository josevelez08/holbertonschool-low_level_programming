#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: copy of the head of lk list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		temp1 = head;
		head = head->next;
		free(temp1);
	}
}
