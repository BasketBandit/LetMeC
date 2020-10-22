#include <stdlib.h>
#include <stdio.h>
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

// This function is purely to test the functionality of this struct.
// In normal operation everything would be handled elsewhere.
void newDogScan() {
    char* name;
    int age;
    char* type;
    char* colour;

    printf("Enter credentials for your new pupper (format -> \"name age type colour\"):\n");
    scanf("%s %d %s %s", *&name, &age, *&type, *&colour);
    Dog dog = new_Dog(name, age, type, colour);
    printf("Good boy/girl -> name: %s, age: %d, type: %s, colour: %s\n", Dog_getName(dog), Dog_getAge(dog), Dog_getType(dog), Dog_getColour(dog));
    Dog_giveAway(dog);
}