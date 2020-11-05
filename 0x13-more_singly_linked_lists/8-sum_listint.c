#include "lists.h"
/**
 * sum_listint - sum the members of the linky list
 * @head: pointer of reference
 * Return: sum of the members integers of the list
 */
int sum_listint(listint_t *head)
{
	int i;
	listint_t *c;

	i = 0;

	c = head;

	if (head == NULL)
	{
		return (0);
	}

while (c->next != NULL)
{
	c = c->next;
	i = i + c->n;
}
	return (i);
}
