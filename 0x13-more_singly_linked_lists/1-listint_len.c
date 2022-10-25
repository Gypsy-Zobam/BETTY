#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: a pointer to a listint_t list
 *
 * Return: returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
