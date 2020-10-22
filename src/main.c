#include <stdio.h>
#include "math/oddeven.h"
#include "array/variadic.h"
#include "memory/dereference.h"
#include "struct/struct.h"
#include "struct/dog.h"

int main() {
    oddeven();
    variadic(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    dereference();
    _struct();
    newDogScan();

    int x;
    scanf("%d", &x);

    return 0;
}

