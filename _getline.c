#include "holberton.h"

/**
 * _getline - Function that allows to get the input
 *
 * Return: buffer.
 **/

char *_getline(void)
{
	ssize_t tmp;
	char *buffer = NULL;
	size_t i  = 0;

	tmp = getline(&buffer, &i, stdin);
	fflush(stdin);
	if (tmp == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, "\n", 1);
		}
		free(buffer);
		exit(0);
	}
	return (buffer);
}
