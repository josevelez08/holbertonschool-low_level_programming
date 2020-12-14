#include "lists.h"
/**
 * print_dlistint - print the nodes
 * @h: pointer to the nodes
 * Return: 0 always
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
