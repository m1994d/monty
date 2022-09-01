#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


struct pack
{
	char *cmd;
	unsigned int n;
	FILE *fdcode;
	int mode;
} pack;

void freeStack(stack_t **stack);

void built_in(stack_t **head);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

#endif /*_MONTY_H_*/