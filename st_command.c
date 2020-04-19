#include "holberton.h"

/**
 * st_command - Function that allows us to choose the cd command or exit
 * @buffer1: pointer to string
 * Return: 0
 **/

int st_command(char *buffer1)
{
	if (_strcmp(buffer1, "exit\n") == 0)
	{
		free(buffer1);
		buffer1 = NULL;
		exit(0);
	}
	else if (_strcmp(buffer1, "exit\n") != 0)
	{
		process(buffer1);
	}
	return (0);
}
