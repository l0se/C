#include <stdio.h>

// int rev(int *a, int *b) {
//     int *temp = *a;
//     *a = *b;
//     *b = temp;
//     return *a + *b;
// }

// int (*frev)(int*, int*) = rev;


void add(int a, int b) {
    printf("%d", a+b);
}

void sub(int a, int b) {
    printf("%d", a-b);
}

void mul(int a, int b) {
    printf("%d", a*b);
}

void div(int a, int b) {
    printf("%d", a/b);
}

void (*farr[4])(int, int) = {add, sub, mul, div};

// void display(int a, int b, void (*f)(int, int)) {
//     f(a, b);
// }