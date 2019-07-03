#include <cstdio>

#define COUNT 100

int *bad() {
    int a = 100;

    return &a;
}

int *good() {
    int *ap = new int;
    *ap = 100;

    return ap;
}

int *lousy() {
    int *ap = new int;
    *ap = 100;
    delete ap;

    return ap;
}

const int SIZE = 100;
const char SYMBOL = 'a';

int main() {
    int *ap = new int[0x10];
    delete [] ap;

    int *b = lousy();
    printf("*b = %d\n", *b);

    int x;  // Automatic
    int *yp = new int;  // Dynamic
    printf("&x = %p, yp = %p, &SIZE = %p, &SYMBOL = %p\n",
        &x, yp, &SIZE, &SYMBOL);
}
