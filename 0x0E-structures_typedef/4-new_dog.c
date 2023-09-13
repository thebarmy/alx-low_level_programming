#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get a length of string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * *_strcpy - copie the string pointed to by src
 *@src: string to copy
 *@dest: copy string to here
 *
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln = strlen(name);
	int lo = strlen(owner);

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (ln + 1));
	dog->owner = malloc(sizeof(char) * (lo + 1));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);

		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
