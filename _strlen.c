#include "holberton.h"

/**
 * _strlen - Function that calculates the lenght of string
 * @str: pointer to string
 * Return: Number of characters of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
