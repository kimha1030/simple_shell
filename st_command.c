#include "holberton.h"

/**
 * st_command - Compare the buffer with exit or pass to another process
 * @buffer: pointer to string
 * Return: 0
 **/

int st_command(char *buffer)
{
	if (strcmp(buffer, "exit\n") == 0)
	{
		free(buffer);
		buffer = NULL;
		exit(0);
	}
	else if (strcmp(buffer, "exit\n") != 0)
	{
		process(buffer);
	}
	return (0);
}
