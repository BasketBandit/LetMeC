#include <stdio.h>
#include <stdarg.h>

void variadic(int nums, ...); // function prototype

void variadic(int nums, ...) {
    va_list list;
    va_start(list, nums);

    int total = 0;
    for(int i = 0; i < nums; i++) {
        total += va_arg(list, int);
    }

    va_end(list);
    printf("%d", total);
}
