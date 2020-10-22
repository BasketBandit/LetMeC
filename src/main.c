#include <stdio.h>
#include "math/oddeven.h"
#include "array/variadic.h"
#include "memory/dereference.h"
#include "struct/struct.h"
#include "struct/dog.h"

int main() {
    Dog dog = new_Dog("Good Boy", 2, "Big", "Brown");
    printf("%s, %d, %s, %s \n", Dog_getName(dog), Dog_getAge(dog), Dog_getType(dog), Dog_getColour(dog));
    Dog_giveAway(dog); // clears memory;

    oddeven();
    variadic(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    dereference();
    _struct();
    newDogScan();

    int x;
    scanf("%d", &x); // stalls terminal so output is readable

    return 0;
}

