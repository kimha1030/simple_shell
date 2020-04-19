#include "holberton.h"

/**
 * copy_cat - copy and cat
 * @len: lenght of the string
 * @arr: the charaters is the definitive of the call a the funtion
 * Return: dest
 */

void copy_cat(int len, char **arr)
{
	char *str, *strc, argv[] = {"/bin/"};
	int resul;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		perror("error: ");
	_strcpy(str, argv);
	resul = find_char(arr[0], '/');
	if (resul == 0)
	{
		strc = malloc(len * sizeof(char));
		if (strc == NULL)
			perror("error: ");
		strc = _strrchr(arr[0], '/');
		_strcat(str, strc);
	}
	else
	{
		_strcat(str, arr[0]);
	}
	if (stat(str, &st) == 0)
	{
		if (execve(str, arr, NULL) == -1)
		{
			perror("error. ");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("%s: No such file or directory\n", arr[0]);
		freeall(str, strc);
		exit(EXIT_FAILURE);
	}
	freeall(str, strc);
	free(arr);
	arr = NULL;
}
