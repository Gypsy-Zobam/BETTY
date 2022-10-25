#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: the head of the listint_t list
 * @n: the data to be added in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_data;

	if (head != NULL)
	{
		new_data = malloc(sizeof(listint_t));
		if (new_data == NULL)
		return (NULL);

		new_data->n = n;
		new_data->next = *head;
		*head = new_data;

		return (new_data);
	}
	return (NULL);
}
