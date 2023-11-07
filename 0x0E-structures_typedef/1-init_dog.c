#include "dog.h"
#include <stddef.h>

/**
 * init_dog - dog initialization
 * struct dog - dog structure
 * @name: name of the dog
 * @d: pointer to the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
