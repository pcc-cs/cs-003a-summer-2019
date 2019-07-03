#include <cstdio>

int main() {
    int *ap = new int;
    printf("Before: *ap = %d\n", *ap);
    *ap = 100;
    printf("After: *ap = %d\n", *ap);

    int *bp = new int[0x10];
    printf("%d\n", bp[0]);
}