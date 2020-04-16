#include "holberton.h"

/**
 * _strtok - Function that splits the string in tokens
 * @str: Pointer to string
 * @separator: Separator character
 * Return: pointer to token
 */

char *_strtok(char *str, const char *separator)
{
	static char *a;
	char *token = NULL;

	if (!str)
	{
		str = a;
		if (!str)
			return (NULL);
	}
	str += _strspn(str, separator);
	if (!*str)
	{
		a = NULL;
		return (NULL);
	}
	token = str;
	str = _strpbrk(token, separator);
	if (str)
	{
		*str = '\0';
		a = str + 1;
	}
	else
		a = NULL;
	return (token);
}
