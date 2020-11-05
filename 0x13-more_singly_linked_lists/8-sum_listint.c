#include "lists.h"
/**
 * sum_listint - sum the members of the linky list
 * @head: pointer of reference
 * Return: sum of the members integers of the list
 */
int sum_listint(listint_t *head)
{
int i = 0;

while (head->next != NULL)
{
	head = head->next;
	i = i + head->n;
}
return (i);
}
