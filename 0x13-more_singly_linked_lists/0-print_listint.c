#include "lists.h"
/**
 * print_listint - check the code for Holberton School students.
 * @h: pointer
 * Return: Always 0.
 */

	size_t print_listint(const listint_t *h)
	{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
