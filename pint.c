#include "monty.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pint - prints the top element of stack
 * @h: points to the top stack
 * @line: line of instruction
 * Return: 0 or 1
 */
int pint(stack_t *h, int line)
{
	if (h == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", h->n);
	return (1);
}

