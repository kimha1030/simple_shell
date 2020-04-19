#include "holberton.h"

/**
 * freeall - free the funtions
 * @str1: the punters at free
 * @str2: the punters at free
 * Return: dest
 */

void freeall(char *str1, char *str2)
{
	free(str1);
	str1 = NULL;
	free(str2);
	str2 = NULL;
}
