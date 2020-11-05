#include "lists.h"
/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: pointer
 * @n: integer
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *iterator = NULL;

	newElement = ((listint_t *)malloc(sizeof(listint_t)));
	if (newElement == NULL)
	{
		return (NULL);
	}

	newElement->n = n;
	newElement->next = NULL;
	if (*head == NULL)
	{
		*head = newElement;
	}
	else
	{
		iterator = (*head);
		while (iterator->next != NULL)
		{
			iterator = iterator->next;
		}
		iterator->next = newElement;
	}
	return (newElement);
}
