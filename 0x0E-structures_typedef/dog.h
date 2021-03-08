#ifndef DOG_H
#define DOG_H

/**
 *struct dog - caracters of the dog
 *@name: name
 *@age: age
 *@owner: owner
 *
 *Description: The caracters of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* DOG_H */
