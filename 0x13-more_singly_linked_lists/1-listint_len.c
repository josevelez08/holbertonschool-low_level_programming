#include "lists.h"
/**
 * listint_len - check the code for Holberton School students.
 * @h: pointer
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
