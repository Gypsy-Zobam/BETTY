#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list, sets head to NULL.
  * @head:  a pointer to the head of the list
  *
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
