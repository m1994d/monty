#include "monty.h"

/**
 * main - Here its the first step
 * @argc: numbers of arguments
 * @argv: argument vector
 *
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	FILE *montyfd;
	size_t buffSize = 0;
	stack_t *head = NULL;

	pack.cmd = NULL, pack.n = 1, pack.mode = 0;

	if (argc != 2 || argv == NULL)
		error("USAGE: monty file", 0, 0);

	montyfd = fopen(argv[1], "r");
	if (!montyfd)
	{
		printf(2, "Error: Can't open file %s", argv[1]);
		error("", 0, 0);
	}
	pack.fdcode = montyfd;

	while (-1 != getline(&pack.cmd, &buffSize, montyfd))
		built_in(&head), pack.n++;

	freeStack(&head);
	free(pack.cmd);
	fclose(montyfd);

	return (EXIT_SUCCESS);
}