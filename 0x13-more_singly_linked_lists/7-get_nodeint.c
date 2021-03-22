#include "lists.h"

/**
*get_nodeint_at_index - fget th node
*@head: the prinsipal node
*@index: the index node extract
*
*Return: the struct node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ram;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ram = head;
	for (i = 0; i < index; i++)
	{
		ram = ram->next;

		if (ram == NULL)
			return (NULL);
	}

	return (ram);
}
