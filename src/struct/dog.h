#ifndef LETMEC_DOG_H
#define LETMEC_DOG_H

typedef struct dog *Dog;

Dog new_Dog(char* name, int age, char* type, char* colour);
char* Dog_getName(Dog this);
int Dog_getAge(Dog this);
char* Dog_getType(Dog this);
char* Dog_getColour(Dog this);
void Dog_giveAway(Dog this);

void newDogScan();

#endif //LETMEC_DOG_H
