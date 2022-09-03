#include "monty.h"

/**/

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next)
	{
		current->n *= -1;
		add(stack, line_number);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: ", line_number);
		error("", 0);
	}
}