

#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: relative to pointer who are using to char name's dog
 * @age: atribute float age's dog
 * @owner: relative to pointer who are using to char owner's dog
 */

/*
 * Nick
 */

struct dog my_dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
