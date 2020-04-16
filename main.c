#include "holberton.h"

/**
 * main - Our Shell
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL;

	while (1)
	{
		printf("shell$ ");
		buffer = _getline();
		st_command(buffer);
		free(buffer);
	}
	return (0);
}
