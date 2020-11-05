#include "lists.h"
/**
 * pop_listint - free
 * @head: double pointer
 * Return: the data of the first node
 */
int pop_listint(listint_t **head)
{
	int i = (*head)->n;

	*head = (*head)->next;
	return (i);
}
