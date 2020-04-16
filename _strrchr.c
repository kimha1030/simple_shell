#include "holberton.h"

/**
 * *_strrchr - Return a pointer to the last ocurrence of char in string
 * @s: pointer to string
 * @c: character
 * Return: pointer to the matched character or NULL if doesn't exist
 **/

char *_strrchr(char *s, int c)
{
	int x, y, z = 0, len;
	char *d;

	len = _strlen(s);
	d = malloc(len * sizeof(char));
	if (d == NULL)
		perror("error: ");
	for (x = len; x >= 0; x--)
	{
		if (s[x] == c)
		{
			for (y = (x + 1); y <= len; y++)
			{
				d[z] = s[y];
				z++;
			}
		}
	}
	return (d);
	free(d);
}
