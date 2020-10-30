#include "lists.h"
/**
 * print_list - print nodes of a singled linked list
 * @h: pointer of type list_T
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
		int i = 0;

		while (h)
{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] ", h->len);
		printf("%s\n", h->str); }

		h = h->next;
		i++;
}


return (i);
}
