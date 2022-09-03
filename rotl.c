#include "monty.h"

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	int value = 0;
	(void) line_number;

	for(; curr && curr->next; curr = curr->next)
	{
		value = curr->n;
		curr->n = (curr->next)->n;
		(curr->next)->n = value;
	}
}