#include "holberton.h"

/**
 * getarr - Function that allows to get the command and arguments
 * @buffer: pointer to string
 * @len: lenght of input
 * Return: the result of the variable arr
 **/

char **getarr(char *buffer, int len)
{
	char **arr, *token, *value;
	int x;

	arr = malloc(len * sizeof(char *));
	if (arr == NULL)
		perror("error: ");
	token = _strdup(buffer);
	value = _strtok(token, " \n\t");
	x = 0;
	while (value != NULL)
	{
		arr[x] = _strdup(value);
		value = _strtok(NULL, " \n\t");
		x++;
	}
	return (arr);
	free(arr);
	free(token);
	free(value);
}
