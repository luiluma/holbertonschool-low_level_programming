#include "lists.h"

/**
 * print_listint - prints all the elements
 *
 * @h: point star node
 * Return: 0
 *
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
