#include "lists.h"

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: is s double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_data;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_data = malloc(sizeof(list_t));
	if (!new_data)
		return (NULL);


	new_data->str = strdup(str);
	new_data->len = len;
	new_data->next = (*head);
	(*head) = new_data;

	return (*head);
}
