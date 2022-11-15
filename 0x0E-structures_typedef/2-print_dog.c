#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog variables
 * @d: struct of dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			print("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->name == NULL)
			printf("Owner: (nil)\n");
		else
			print("Owner: %s\n", d->owner);
	}
}
