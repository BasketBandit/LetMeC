#include <stdlib.h>
#include "ArrayList.h"

/*
 * Checks if index is within bounds of array, exit if not.
 */
void boundsCheck(ArrayList this, int index) {
    if(index < 0 || index > this->size-1) {
        exit(139);
    }
}

ArrayList new_ArrayList() {
    ArrayList this = (ArrayList)malloc(sizeof(struct arraylist)); // malloc sizeof(struct dog) because Dog* is a pointer reference. (gives us < 10 bytes)
    this->size = 0;
    this->allocatedSize = 10;
    this->elements = calloc(this->allocatedSize, sizeof(int));
    return this;
}

int ArrayList_get(ArrayList this, int index) {
    boundsCheck(this, index);
    return this->elements[index];
}

void ArrayList_add(ArrayList this, int element) {
    if(this->size == this->allocatedSize && this->allocatedSize < INT_MAX) {
        this->allocatedSize = (long long)this->allocatedSize + (long long)(this->allocatedSize >> 1) <= INT_MAX ? this->allocatedSize + (this->allocatedSize >> 1) : INT_MAX;
        this->elements = realloc(this->elements, this->allocatedSize * sizeof(int));
    }
    this->elements[this->size] = element;
    this->size++;
}

void ArrayList_set(ArrayList this, int index, int element) {
    boundsCheck(this, index);
    this->elements[index] = element;
}

void ArrayList_remove(ArrayList this, int index) {
    boundsCheck(this, index);

    if(index == this->size) {
        this->size--;
        return;
    }

    for(int i = index; i < this->size; i++) {
        this->elements[i] = this->elements[i+1];
    }
    this->size--;
}

void ArrayList_shrink(ArrayList this) {
    if(this->size != this->allocatedSize) {
        int size = this->size > 1 ? this->size : 2; // min size of 2 required for shift right in _add().
        this->elements = realloc(this->elements, size * sizeof(int));
        this->allocatedSize = size;
    }
}

int ArrayList_size(ArrayList this) {
    return this->size;
}

void ArrayList_destroy(ArrayList this) {
    free(this->elements);
    free(this);
    this = NULL;
}
