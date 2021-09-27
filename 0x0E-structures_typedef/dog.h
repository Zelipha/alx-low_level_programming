#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: pet's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/