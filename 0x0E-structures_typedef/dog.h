#ifndef _DOG_
#define _DOG_

/**
 * struct dog - for storing a dog's data
 * @name: pointer to the dog's name
 * @age: it's age
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
 * dog_t - typedef for struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dawg *new_dog(char *name, float age, char *owner);

#endif

