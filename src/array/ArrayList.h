#ifndef LETMEC_ARRAYLIST_H
#define LETMEC_ARRAYLIST_H

struct arraylist {
    // unsigned int for size/allocatedSize since neither values can be negative
    // a side effect of this means you can skip casting long long in ArrayList_add();
    // since a bitwise shift right + addition at INT_MAX is less than UINT_MAX
    unsigned int size;
    unsigned int allocatedSize;
    int* elements;
};

typedef struct arraylist *ArrayList;

ArrayList new_ArrayList();
int ArrayList_get(ArrayList this, int index);
void ArrayList_add(ArrayList this, int element);
void ArrayList_set(ArrayList this, int index, int element);
void ArrayList_remove(ArrayList this, int index);
int ArrayList_size(ArrayList this);
void ArrayList_shrink(ArrayList this);
void ArrayList_destroy(ArrayList this);

#endif //LETMEC_ARRAYLIST_H
