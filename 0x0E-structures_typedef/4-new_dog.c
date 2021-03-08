#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 *new_dog - create a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *
 *Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_c, *owner_c;
	int i, l_name = _strlen(name), l_owner = _strlen(owner);


	if (name == NULL || owner == NULL)
		return (NULL);

	name_c = malloc((l_name + 1) * sizeof(char));
	if (name_c == NULL)
		return (NULL);

	owner_c = malloc((l_owner + 1) * sizeof(char));
	if (owner_c == NULL)
	{
		free(name_c);
		return (NULL);
	}

	for (i = 0; i <= l_name; i++)
		name_c[i] = name[i];

	for (i = 0; i <= l_owner; i++)
		owner_c[i] = owner[i];

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(name_c);
		free(owner_c);
		return (NULL);
	}

	(*my_dog).name = name_c;
	(*my_dog).age = age;
	(*my_dog).owner = owner_c;

	return (my_dog);
}


/**
 * _strlen - lenght the string
 * @s: string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
