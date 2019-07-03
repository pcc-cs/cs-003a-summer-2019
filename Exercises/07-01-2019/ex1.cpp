#include <cstdio>

void inc1(int &a) {
    ++a;
}

void inc2(int *ap) {
    printf("ap = %p, *ap = %d\n", ap, *ap);

    (*ap)++;
}

int main() {
    int x = 100;
    int y = 200;

    int *p = &y;
    printf("%d, %d\n", *p, *(p+1));

    inc2(&x);
    printf("After: %d\n", x);

    inc2(&y);
    printf("After: %d\n", y);
}
