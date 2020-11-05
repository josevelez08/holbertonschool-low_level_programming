#include "lists.h"
/**
 * sum_listint - sum the members of the linky list
 * @head: pointer of reference
 * Return: sum of the members integers of the list
 */
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *c;

c = head;
while (c->next != NULL)
{
	c = c->next;
	i = i + c->n;
}
	return (i);
}
