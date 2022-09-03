#include "monty.h"

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int value = 0;
	(void) line_number;

	while (curr && curr->next)
		curr = curr->next;

	for (; curr && curr->prev; curr = curr->prev)
	{
		value = curr->n;
		curr->n = (curr->prev)->n;
		(curr->prev)->n = value;
	}
}