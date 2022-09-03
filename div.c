include "monty.h"

/**
 * divs - The opcode div divide the top two elements of the stack.
 * it simply divide the nodes, store the result on one node,
 * the other one is set to zero, and calls the "add" command function
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void divs(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	char *msg;

	if (current && current->next && (current->n != 0))
	{
		current->n = (current->next)->n / current->n;
		(current->next)->n = 0;
		add(stack, line_number);
		return;
	}

	if (current && current->n == 0)
		msg = "L%d: division by zero";
	else
		msg = "L%d: can't div, stack too short";

	freeStack(stack);
	free(pack.cmd);
	dprintf(2, msg, line_number);
	error("", 0, 1);
}