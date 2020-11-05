#include "lists.h"
/**
 * add_nodeint - check the code for Holberton School students.
 * @head: pointer
 * @n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = (listint_t *)malloc(sizeof(listint_t));
	if (c == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		c->next = NULL;
	}
	else
	{
		c->next = *head;
	}
	*head = c;
	c->n = n;

	return (c);
}
