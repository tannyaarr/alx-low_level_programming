#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: is the pointer to name
 * @age: is the pointer to age
 * @owner: is a pointer to owner
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0;
	int b = 0;
	int c;
	dog_t *dog1;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);

	}
	dog1->name = malloc(a * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		dog1->name[c] = name[c];
	dog1->age = age;
	dog1->owner = malloc(b * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		dog1->owner[c] = owner[c];
	return (dog1);
}
