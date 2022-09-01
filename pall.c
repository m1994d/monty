#include "monty.h"

/**
 * pall - The opcode pall prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	for (; current; current = current->next)
		printf("%d\n", current->n);
}