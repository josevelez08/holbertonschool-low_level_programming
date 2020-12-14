#include "lists.h"
/**
 * add_dnodeint_end - adding a node in the end
 * @head: the addrress of the double linked list
 * @n: data
 * Return: adrres
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp1;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
	return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
	{
	*head = newNode;
	}
	else
	{
	temp1 = *head;

	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = newNode;
	}
	return (temp1);
}
