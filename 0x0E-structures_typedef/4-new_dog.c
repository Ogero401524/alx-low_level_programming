#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;

    new_dog = (dog_t *)malloc(sizeof(dog_t));

    if (new_dog == NULL)
        return (NULL);

    new_name = strdup(name);
    new_owner = strdup(owner);

    if (new_name == NULL || new_owner == NULL)
    {
        free(new_dog);
        free(new_name);
        free(new_owner);
        return (NULL);
    }

    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}
