#include <stdio.h>
#include "dereference.h"

int valX;
int* refX;

void dereference() {
    printf("Enter value to be stored:\n");
    scanf("%d", &valX);
    refX = &valX;
    printf("valX: %d, refX: %d\n", valX, *refX);
    dereferenceValue();
}

void dereferenceValue() {
    printf("Enter replacement value:\n");
    scanf("%d", *&refX);
    printf("valX: %d, refX %d\n", valX, *refX);
}