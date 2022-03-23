#include "lists.h"

/**
 * print_listint - check the code
 * @h: pointer
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
