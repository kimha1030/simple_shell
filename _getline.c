#include "holberton.h"

/**
 * _getline - Function that allows to get the input
 *
 * Return: buffer.
 **/

char *_getline(void)
{
	ssize_t tmp;
	char *line = NULL;
	size_t i  = 0;

	tmp = getline(&line, &i, stdin);
	fflush(stdin);
	if (tmp == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, "\n", 1);
		}
		free(line);
		line = NULL;
		exit(0);
	}
	return (line);
	free(line);
	line = NULL;
}
