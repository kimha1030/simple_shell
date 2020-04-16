#include "holberton.h"

/**
 * st_command - Function that allows us to choose the cd command or exit
 * @buffer: pointer to string
 * Return: integer
 **/

int st_command(char *buffer, ...)
{
	va_list args;
	int j, i;

	specif_fto arbi[] = {
		{"exit", f_exit},
		{"cd", _chdir},
		{NULL, NULL}
	};
	if (buffer == NULL)
		return (-1);
	va_start(args, buffer);
	for (i = 0; buffer[i]; i++)
	{
		for (j = 0; arbi[j].fto; j++)
		{
			if (buffer[i] == *(arbi[j]).fto)
			{
				arbi[j].p(args);
				return (1);
			}
			else
			{
				process(buffer);
				return (2);
			}
		}
	}
	va_end(args);
	return (0);
}
