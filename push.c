#include "monty.h"

/**
 * push - The opcode push pushes an element at the top
 * of the stack
 * @stack: stack where this function will operate
 * @line_number: on error case, to print out the info
 *
 *
 * Return: nothing
 * On error: it frees some buffers and exit the program
 * with EXIT_FAILURE
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *add, *current = *stack;
	char *value;

	add = malloc(sizeof(stack_t));
	if (!add)
	{
		freeStack(stack), free(pack.cmd);
		error("Error: malloc failed", 0, 1);
	}
	value = strtok(NULL, " \n\t"); /* read next parameter from pack.cmd */

	if (value && isNumber(value))
		add->n = atoi(value);
	else
	{
		printf(2, "L%d: usage: push integer\n", line_number);
		free(add), free(pack.cmd), freeStack(stack);
		fclose(pack.fdcode), exit(EXIT_FAILURE);
	}

	if (pack.mode == 0)
	{
		if (current)
			current->prev = add;
		*stack = add;
		add->next = current;
		add->prev = NULL;
	}
	else
	{
		while (current && current->next)
			current = current->next;

		if (current)
			current->next = add;
		else
			*stack = add;
		add->prev = current;
		add->next = NULL;
	}
}