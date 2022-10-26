#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list
 * @h: pointer to a listint_t list
 * Return: return the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
