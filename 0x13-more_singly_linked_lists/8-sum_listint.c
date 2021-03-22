#include "lists.h"

/*
*sum_listint - sum the number n int the nodes
*@head: the prinsipal node
*
*Return: the sum in all numbers
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
