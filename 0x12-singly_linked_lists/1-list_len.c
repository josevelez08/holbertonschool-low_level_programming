#include "lists.h"
/**
 * list_len - count the number of nodes
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
