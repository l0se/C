#include <stdio.h>

int rev(int *a, int *b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
    return *a + *b;
}