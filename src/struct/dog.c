#include <stdlib.h>
#include "dog.h"

Dog new_Dog(char* name, int age, char* type, char* colour) {
    Dog this = (Dog)malloc(sizeof(struct dog)); // malloc sizeof(struct dog) because Dog* is a pointer reference. (gives us < 10 bytes)
    this->name = name;
    this->age = age;
    this->type = type;
    this->colour = colour;
    return this;
}

void Dog_giveAway(Dog this) {
    free(this);
}

char* Dog_getName(Dog this) {
    return this->name;
}

int Dog_getAge(Dog this) {
    return this->age;
}

char* Dog_getType(Dog this) {
    return this->type;
}

char* Dog_getColour(Dog this) {
    return this->colour;
}