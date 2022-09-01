#include "monty.h"

/**
*
*/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next)
	{
		(current->next)->n = current->n + (current->next)->n;
		pop(stack, pack.n);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't add, stack too short", line_number);
		error("", 0, 1);
	}
}