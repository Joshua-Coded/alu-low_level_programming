
#ifndef _DOG_H_
#define _DOG_H_

/*
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog---- struct that stores some information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 *  Description: struct called "dog" that stores it's name, age, and owner.
 */

struct dog
{
    char *name;
    float age;
    char *owner;
};
