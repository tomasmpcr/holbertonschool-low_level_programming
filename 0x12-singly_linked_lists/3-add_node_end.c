#include "lists.h"


/**
* _strlen - function of strlen
* @s: pointer
* ------------------------------------
* Return: return the characters
*/

int _strlen(const char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0';)
		len++;

	return (len);
}

/**
 *add_node_end - function print list
 *@head: list_t
 *@str: string
 *
 *Return: struct
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ram;
	list_t *h;

	ram = malloc(sizeof(list_t));
	if (ram == NULL)
		return (NULL);

	ram->len = _strlen(str);
	ram->str = strdup(str);
	ram->next = NULL;

	if (*head == NULL)
	{
		*head = ram;
		return (ram);
	}
	else
		h = *head;

	for (; 1 == 1;)
	{
		if (h->next == NULL)
			break;

		h = h->next;
	}

	h->next = ram;
	return (ram);
}
