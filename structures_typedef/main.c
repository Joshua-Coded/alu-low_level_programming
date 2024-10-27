#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
    struct dog my_dog;
    my_dog.name = "Bella";
    my_dog.age = 10.0;
    my_dog.owner = "Bog";

    printf("My name is %s, and I am %.1f : ) - Wogggg!\n", my_dog.name, my_dog.age);
    return 0;
}
