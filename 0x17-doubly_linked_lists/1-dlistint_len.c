#include "lists.h"
/**
 * dlistint_len - length of the singled linked list
 * @h: pointer to the singled linked list
 * Return: length of the singled linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
