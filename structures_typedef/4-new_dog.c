#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function to make new dog
 * @name: paramater for name
 * @age: paramater for age
 * @owner: paramater for age
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;
	dog_t *dog;

	x = y = 0;
	while (name[x++]);
	while (owner[y++]);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(x * sizeof(dog->name));
	if (dog == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		dog->name[z] = name[z];

	dog->age = age;

	dog->owner = malloc(y * sizeof(dog->owner));
	if (dog == NULL)
		return (NULL);
	for (z = 0; z < y; z++)
		dog->owner[z] = owner[z];
	return (dog);
}
