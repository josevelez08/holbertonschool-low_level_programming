#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
char *name;
double age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
