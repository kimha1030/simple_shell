#include "holberton.h"

/**
 * *_strcpy - Copy a string into the given location
 * @dest: Location for copy string
 * @src: String that should be copy into other string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
