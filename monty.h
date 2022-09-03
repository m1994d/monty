#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/**
 
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct pack - transport getline and line_number
 * @cmd: current line in operation
 * @n: current line number
 * @fdcode: to close globally the opened file
 * @mode: 0 stack, 1 queue
 *
 * Description: whole line in manipulation and his
 * position
 */
struct pack
{
	char *cmd;
	unsigned int n;
	FILE *fdcode;
	int mode;
} pack;

void freeStack(stack_t **stack);
int isNumber(char *str);
char *str_concat(char *s1, char *s2);
void built_in(stack_t **head);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
#endif /*_MONTY_H_*/
