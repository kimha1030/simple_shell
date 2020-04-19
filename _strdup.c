#include "holberton.h"

/**
 * *_strdup - returns a pointer to a newly space in memory.
 * @s: pointer to string
 * Return: pointer to string n
 **/

char *_strdup(const char *s)
{
	int x = 0, y = 0;
	char *n;

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		x = _strlen(s);
		n = malloc(sizeof(char) * (x + 1));
		if (n == NULL)
		{
			return (NULL);
		}
		else
		{
			while (s[y] != '\0')
			{
				n[y] = s[y];
				y++;
			}
			return (n);
		}
	}
}
