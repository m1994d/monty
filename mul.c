#include  "monty.h"

/**/

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current && current->next && (current->n != 0))
	{
		current->n = (current->next)->n * current->n;
		(current->next)->n = 0;
		add(stack, line_number);
	}
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't mul, stack too short", line_number);
		error("", 0, 1);
	}
}