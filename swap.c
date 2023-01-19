#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - swaps the first two elements of the stack
 * @head: pointer to pointer of topmost element
 * @line: instruction line
 * Return: always 1
 */
int swap(stack_t **head, int line)
{
	stack_t *temp_1, *temp_2;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", line);
		exit(EXIT_FAILURE);
	}
	temp_1 = *head;
	temp_2 = (*head)->next;
	if (temp_2->next != NULL)
		temp_2->next->prev = *head;
	temp_1->next = temp_2->next;
	temp_1->prev = temp_2;
	temp_2->next = temp_1;
	temp_2->prev = NULL;
	*head = B;
	return (1);
}
