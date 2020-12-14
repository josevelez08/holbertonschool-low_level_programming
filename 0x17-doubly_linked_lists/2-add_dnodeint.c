#include "lists.h"
/**
 * add_dnodeint - adding a node in teh head
 * @head: the addrress the single linked lists
 * @n: integer or data
 * Return: the addrress of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
	return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}
