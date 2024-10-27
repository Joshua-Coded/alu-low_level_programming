#include <stdio.h>
#include "dog.h"

int main()
{
    struct dog my_dog;
    init_dog(&my_dog, "Boobbb", 5.7, "Boboooo");
    printf("My name is %s, and I am %.1f : ) Wobbbbb!\n", my_dog.name, my_dog.age);
    return 0;
}