#include "holberton.h"

/**
 * _strspn - Function that calculates the length of a substring.
 * @str: pointer to string
 * @accept: pointer to substring
 * Return: number the bytes of the string that match with substring
 */

size_t _strspn(char *str, const char *accept)
{
	size_t i = 0, j = 0;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (str[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
