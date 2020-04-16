#include "holberton.h"

/**
 * find_char - Function that finds character in string
 * @s: pointer to string
 * @c: character
 * Return: 0 if there is a character or -1 if it doesn't exist.
 **/

int find_char(char *s, int c)
{
	int x = 0;

	while (*s)
	{
		if (s[x] != c)
		{
			return (-1);
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (0);
}
