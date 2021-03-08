#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - delte dog
 *@d: dog_t
 *Ã
 *Return: void
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
