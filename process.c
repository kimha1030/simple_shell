#include "holberton.h"

/**
 * process - Function that allows create process
 * @buffer: value obtained by _getline
 * Return: void
 */

int process(char *buffer)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		call_function(buffer);
	}
	else
	{
		free(buffer);
		buffer = NULL;
		waitpid(-1, &status, WUNTRACED);
		main();
	}
	return (0);
}
