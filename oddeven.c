#include <stdio.h>

int input = 0;

int main() {
    printf("Enter integer to find out if it is odd or even!\n");
    scanf("%d", &input);
    printf(input % 2 == 0 ? "Even\n" : "Odd\n");
    return 0;
}