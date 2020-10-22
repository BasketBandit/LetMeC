#ifndef LETMEC_DOG_H
#define LETMEC_DOG_H

struct dog {
    char* name;
    int age;
    char* type;
    char* colour;
};

typedef struct dog *Dog;

Dog new_Dog(char* name, int age, char* type, char* colour);
char* Dog_getName(Dog this);
int Dog_getAge(Dog this);
char* Dog_getType(Dog this);
char* Dog_getColour(Dog this);
void Dog_giveAway(Dog this);

#endif //LETMEC_DOG_H
