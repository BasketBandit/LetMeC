#include <stdio.h>
#include <stdlib.h>
#include "math/oddeven.h"
#include "array/variadic.h"
#include "memory/dereference.h"
#include "struct/struct.h"
#include "struct/dog.h"

int main() {
    Dog dog = new_Dog("Max", 8, "Good", "Blue");
    printf("%s, %d, %s, %s \n", Dog_getName(dog), Dog_getAge(dog), Dog_getType(dog), Dog_getColour(dog));
    Dog_giveAway(dog); // free memory

    Dog* dogs = (Dog*)calloc(2, sizeof(struct dog)); // query - since I malloc each new dog, do I need to call calloc for this array of dogs or is it a waste of memory?
    dogs[0] = new_Dog("Bones", 10, "Lovely", "Brown");
    dogs[1] = new_Dog("Emily", 12, "Sweet", "Grey");

    for(int i = 0; i < 2; i++) {
        printf("%s, %d, %s, %s \n", Dog_getName(dogs[i]), Dog_getAge(dogs[i]), Dog_getType(dogs[i]), Dog_getColour(dogs[i]));
        Dog_giveAway(dogs[i]); // free each array item
    }
    free(dogs); // free array memory

    oddeven();
    variadic(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    dereference();
    _struct();

    int x = 0;
    scanf("%d", &x); // stall terminal so output is readable

    return 0;
}