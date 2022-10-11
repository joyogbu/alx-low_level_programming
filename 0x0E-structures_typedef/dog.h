#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct function
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a structure with 3 members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
