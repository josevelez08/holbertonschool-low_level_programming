#include "lists.h"
/**
 * get_nodeint_at_index - return of the adrres number index
 * @head: pointer to reference
 * @index: number of node to return the adrress
 * Return: addrres
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = (head)->next;
		i++;
	}
	return (head);
}
