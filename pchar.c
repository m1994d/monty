#include "monty.h"

void pchar(stack_t **stack, unsigned int line_number)
{
	char *msg;

	if (*stack)
		if ((*stack)->n >= 0 && (*stack)->n <= 127)
		{
			printf("%c\n", (*stack)->n);
				return;
		}
		else
			msg = "L%d: can't pchar, value out of range";
	else
		msg = "L%d: can't pchar, stack empty";

	freeStack(stack);
	free(pack.cmd);
	dprintf(2, msg, line_number);
	error("", 0, 1);
}