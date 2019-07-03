#include <cstdio>

#define SIZE(a) (sizeof(a)/sizeof(a[0]))

int main() {
    int a[] = {10, 20, 30};
    for (int v : a) {
        printf("%d\n", v);
    }

    int *ap = a+1;
    for (int i = 0; i < SIZE(a); ++i) {
        printf("%d\n", ap[i]);
    }

    printf("%d, %d\n", a[1], *(a+1));
}