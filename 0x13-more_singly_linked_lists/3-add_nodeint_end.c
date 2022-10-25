#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the
 * end of a listint_t list.
 * @head: the head of the listint_t list.
 * @n: the data to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_data;
	listint_t *tmp;

	new_data = malloc(sizeof(listint_t));

	if (new_data == NULL)
		return (NULL);

	tmp = *head;

	if (*head == NULL)
	{
		new_data->n = n;
		new_data->next = NULL;
		*head = new_data;

		return (new_data);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	new_data->next = NULL;
	new_data->n = n;
	tmp->next = new_data;

	return (new_data);
}
