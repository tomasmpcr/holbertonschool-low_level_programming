#include "lists.h"

/**
*insert_nodeint_at_index - insert the node int index
*@head: the prinsipal node
*@idx: index node insert
*@n: value n int the new node
*
*Return: the new node pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_new;
	listint_t *ram;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Create a new node */
	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;

	if (idx > 0)
	{
		/* Serch the node insert */
		if (*head == NULL)
			return (NULL);

		ram = *head;
		for (i = 0; i < (idx - 1); i++)
		{
			ram = ram->next;
			if (ram == NULL)
				return (NULL);
		}

		/* Assign values the new node */
		node_new->next = ram->next;

		ram->next = node_new;
	}
	else
	{
		if (*head == NULL)
			*head = node_new;
		else
		{
			ram = *head;
			node_new->next = ram;
			*head = node_new;
		}
	}

	return (node_new);
}
