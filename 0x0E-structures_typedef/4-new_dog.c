#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pounter to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nptr;
	char *optr;

	int i = 0;
	int j = 0;
	int k;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	for (i = 0; name[i];)
		i++;
	for (j = 0; owner[j];)
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nptr = malloc(i + 1);
	if (nptr == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (k = 0; name[k]; k++)
		nptr[k] = name[k];
	nptr[k] = '\0';
	optr = malloc(j + 1);
	if (optr == NULL)
	{
		free(new_dog);
		free(nptr);
		return (NULL);
	}
	for (k = 0; owner[k]; k++)
		optr[k] = owner[k];
	optr[k] = '\0';
	new_dog->name = nptr;
	new_dog->age = age;
	new_dog->owner = optr;
	return (new_dog);
}
