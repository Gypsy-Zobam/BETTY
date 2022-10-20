#include "lists.h"

/**
 * print_list - a function that prints all elements of a singly-linked list
 * @h: pointer to a list_t list
 *
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		num++;
	}
	return (num);
}
