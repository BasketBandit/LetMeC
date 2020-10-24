#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "math/oddeven.h"
#include "array/variadic.h"
#include "memory/dereference.h"
#include "struct/struct.h"
#include "struct/dog.h"
#include "array/ArrayList.h"

int main() {
    Dog* dogs = (Dog*)calloc(2, sizeof(struct dog)); // query - since I malloc each new dog, do I need to call calloc for this array of dogs or is it a waste of memory?
    dogs[0] = new_Dog("Bones", 10, "Lovely", "Brown");
    dogs[1] = new_Dog("Emily", 12, "Sweet", "Grey");

    for(int i = 0; i < 2; i++) {
        printf("%s, %d, %s, %s \n", Dog_getName(dogs[i]), Dog_getAge(dogs[i]), Dog_getType(dogs[i]), Dog_getColour(dogs[i]));
        Dog_giveAway(dogs[i]); // free each array item
    }
    free(dogs); // free array memory

    ArrayList list = new_ArrayList();
    for(int i = 0; i < 100; i++) {
        ArrayList_add(list, i);
    }
    ArrayList_shrink(list);
    ArrayList_set(list, 13, 1000);
    ArrayList_remove(list, 50);
    for(int i = 0; i < ArrayList_size(list); i++) {
        printf("%d ", ArrayList_get(list, i));
    }
    printf("\n");
    ArrayList_destroy(list);

    oddeven();
    variadic(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    dereference();
    _struct();

    int x = 0;
    scanf("%d", &x); // stall terminal so output is readable

    return 0;
}