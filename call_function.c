#include "holberton.h"

/**
 * call_function - Function that call others functions in child process
 * @buffer: pointer to string obtained in function getline
 * Return: void
 */

void call_function(char *buffer)
{
	int  len;
	char **arr;

	len = _strlen(buffer);
	arr = getarr(buffer, len);
	copy_cat(len, arr);
	free(arr);
	free(buffer);
}
