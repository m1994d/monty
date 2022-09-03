#include "monty.h"

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	char *msg;

	if (current && current->next && (current->n != 0))
	{
		current->n = (current->next)->n % current->n;
		(current->next)->n = 0;
		add(stack, line_number);
		return;
	}

	if (current && current->n == 0)
		msg = "L%d: division by zero";
	else
		msg = "L%d: can't mod, stack too short";

	freeStack(stack);
	free(pack.cmd);
	dprintf(2, msg, line_number);
	error("", 0, 1);
}