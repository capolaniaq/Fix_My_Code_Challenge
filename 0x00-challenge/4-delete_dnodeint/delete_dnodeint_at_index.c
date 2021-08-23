#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_prev;
	dlistint_t *tmp;
	dlistint_t *tmp_next;

	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}

	if (0 == index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
		return (1);
	}

	tmp = *head;
	p = 0;
	while (p < index && tmp != NULL)
	{
		tmp = tmp->next;
		p++;
	}

	if (p != index)
	{
		return (-1);
	}

	tmp_prev = tmp->prev;
	tmp_next = tmp->next;
	tmp_prev->next = tmp_next;
	tmp_next->prev = tmp_prev;
	free(tmp);
	return (1);
}
