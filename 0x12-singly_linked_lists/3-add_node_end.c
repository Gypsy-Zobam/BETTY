#include "lists.h"

/**
 * add_node_end - function that adds a new node at
 * the end of a list_t list
 * @head: is a double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_data;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_data = malloc(sizeof(list_t));
	if (!new_data)
		return (NULL);

	new_data->str = strdup(str);
	new_data->len = len;
	new_data->next = NULL;

	if (*head == NULL)
	{
		*head = new_data;
		return (new_data);
	}


	while (temp->next)
		temp = temp->next;

	temp->next = new_data;

	return (new_data);
}
