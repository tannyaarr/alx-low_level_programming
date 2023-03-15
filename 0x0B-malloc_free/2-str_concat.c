#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: The first string to be concatenate
 * @s2: The secong string to be concatenate
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, a;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	s = malloc(sizeof(char) * (i + a + 1));

	if (s == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[a] != '\0')
	{
		s[i] = s2[a];
		i++, a++;
	}

	s[i] = '\0';
	return (s);
}
