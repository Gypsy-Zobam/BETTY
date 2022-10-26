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

	if (head)
	{
		new_data = malloc(sizeof(listint_t));
		if (new_data == NULL)
			return (NULL);

		new_data->n = n;
		new_data->next = NULL;

		if (*head == NULL)
		{
			*head = new_data;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = new_data;
			return (tmp);
		}
	}

	return (NULL);
}
