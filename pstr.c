#include "monty.h"

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr = *stack;
	(void) line_number;

	for (; curr; curr = curr->next)
		if (curr->n > 0 && curr->n <= 127)
			putchar(curr->n);
		else
			break;
	putchar('\n');
}