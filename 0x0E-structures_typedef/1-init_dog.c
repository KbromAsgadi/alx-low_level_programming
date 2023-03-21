#include <stdlib.h>
#include "dog.h"
/**
*init_dog - function that initialize a variable of type struct dog
*@name: char type
*@age: float type
*@owner: char type
*@d: struct type
*Return: a pointer
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
