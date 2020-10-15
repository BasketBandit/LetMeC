#include <stdio.h>

void oddeven(); // function prototype

void oddeven() {
    int input = 0;
    printf("Enter integer to find out if it is odd or even!\n");
    scanf("%d", &input);
    printf(input % 2 == 0 ? "Even\n" : "Odd\n");
}