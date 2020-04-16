#include "holberton.h"

/**
 * _strcat - concatenates two strings into string dest
 * @dest: string
 * @src: string that should be copied into dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, z;

	x = _strlen(dest);
	for (z = 0; src[z] != '\0'; z++)
	{
		dest[x] = src[z];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
