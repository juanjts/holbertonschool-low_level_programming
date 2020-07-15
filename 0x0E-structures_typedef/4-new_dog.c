#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: new
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	int n, c, i;

	for (n = 0; name[n] != '\0'; n++)
	;
	for (c = 0; owner[c] != '\0'; c++)
	;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * (n + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (c + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	for (i = 0; i <= n; i++)
	{
		new->name[i] = name[i];
	}
	new->age = age;

	for (i = 0; i <= c; i++)
	{
		new->owner[i] = owner[i];
	}
	return (new);
}
