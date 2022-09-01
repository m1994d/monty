#include "monty.h"

/**
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
	}
	else if (*stack)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		free(pack.cmd);
		dprintf(2, "L%d: can't pop an empty stack", line_number);
		error("", 0, 1);
	}
}