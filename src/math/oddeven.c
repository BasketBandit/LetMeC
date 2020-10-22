#include <stdio.h>
#include "oddeven.h"

void oddeven() {
    int input = 0;
    printf("Enter integer to determine odd or even:\n");
    scanf("%d", &input);
    printf(input % 2 == 0 ? "Even\n" : "Odd\n");
}