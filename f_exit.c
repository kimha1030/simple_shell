#include "holberton.h"

/**
 * f_exit - Function that allows to finish
 * @args: list of variable arguments
 * Return: Always 0.
 **/

int f_exit(va_list args)
{
	printf("Finished\n");
	exit(0);
	return (0);
	free(args);
}
