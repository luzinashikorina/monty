#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - Add a new node at the beginning of dlistint_t list
 * @head: The head of list
 * @val:the value of the new node
 * @lines: line of instruction
 * Return: The address of the new node, or NULL if it failed
 */

stack_t *push(stack_t **head, char *val, int lines)
{
	stack_t *new;
	int n;

	n = atoi(val);
	if (n == 0 || val == NULL)
	{
		printf("L%d: usage: push integer\n", lines);
		exit(EXIT_FAILURE);
	}

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
