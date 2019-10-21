#ifndef DANTE_DOG
#define DANTE_DOG
/**
 * struct dog - Data of my dog
 * @name: name of the dog
 * @age: age in years of the dog
 * @owner: Name of the owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
