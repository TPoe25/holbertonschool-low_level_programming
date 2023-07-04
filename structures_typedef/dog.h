#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to add info
 * @name: char pointer
 * @age: float int
 * @owner: char pointer
 */

typedef struct dog
{	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
