#ifndef MAIN_STRUCT
#define MAIN_STRUCT
/**
 * struct dog - A structure to represent dog information.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
