#include "monty.h">
#include <stddef.h>
#include <stdio.h>

/**
 * pall - prints all elements of stack
 * @h: pointer to the top stack
 * Return : 0 if fail, 1 otherwise
 */
int pall(stack_t *h)
{
	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (1);
}
