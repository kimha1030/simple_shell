#include "holberton.h"

/**
 * main - Our Shell
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL;

	signal(SIGINT, check_signal);

	while (1)
	{
		printf("shell$ ");
		buffer = _getline();
		st_command(buffer);
		free(buffer);
		buffer = NULL;
	}
	return (0);
}
