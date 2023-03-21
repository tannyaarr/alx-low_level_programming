#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's information
 * @name: first input
 * @age: second input
 * @owner: third input
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t- typedef for struct dog
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
