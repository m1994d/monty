#include "monty.h"

/**
*
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (*stack && (*stack)->next)
	{
		*stack = current->next;
		current->next = (*stack)->next;
		current->prev = *stack;
		(*stack)->prev = NULL;
		(*stack)->next = current;
		if (current->next)
			(current->next)->prev = current;
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't swap, stack too short", line_number);
		error("", 0, 1);
	}
}