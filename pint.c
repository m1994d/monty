#include "monty.h"

/**
 * pint
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		freeStack(stack);
		free(pack.cmd);
		dprintf(2, "L%d: can't pint, stack empty", line_number);
		error("", 0, 1);
	}
}