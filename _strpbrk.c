#include "holberton.h"

/**
 * _strpbrk - function that locates a character in a string.
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer to the byte in string s that matches with accept
 */

char *_strpbrk(char *s, const char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
