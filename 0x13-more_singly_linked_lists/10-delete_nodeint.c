#include "lists.h"

/*
*delete_nodeint_at_index - delete node at index
*@head: the prinsipal node
*@index: index node delete
*
*Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ram;
	listint_t *sig;
	unsigned int i;

	ram = *head;
	if (ram == NULL)
		return (-1);

	if (index > 0)
	{
		for (i = 0; i < (index - 1); i++)
 		{
			ram = ram->next;
			if (ram == NULL)
				return (-1);
		}

		sig = ram->next;
		if (sig == NULL)
			return (-1);

		ram->next = sig->next;
	}
	else
	{
		sig = ram;
		if (ram->next == NULL)
			return (-1);
		*head = ram->next;
	}

	free(sig);
	return (1);
}
