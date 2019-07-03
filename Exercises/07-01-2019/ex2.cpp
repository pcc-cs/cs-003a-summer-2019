#include <cstdio>

int main() {
    int a = 10, b = 20, c = 30;

    int *p1 = &a;
    auto p2 = p1;
    int *p3 = &c;

    printf("%d, %d\n", *p1, *p2);

    *p1 = *p1 + 100;
    printf("%d\n", *p2);

    printf("Before: *p3 = %d\n", *p3);
    *p3 = *p2;
    printf("After 1: *p3 = %d\n", *p3);
    *p2 = 0;
    printf("After 2: *p3 = %d\n", *p3);
}