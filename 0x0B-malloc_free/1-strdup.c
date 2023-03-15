#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int a = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	s = malloc(sizeof(char) * (a +1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	return (s);
}
