#include "holberton.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: The difference between two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
