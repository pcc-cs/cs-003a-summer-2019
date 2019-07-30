#include <iostream>

void swap(int *ap, int *bp) {
  int t = *ap;
  *ap = *bp;
  *bp = t;
}

template <class T>
void gSwap(T *ap, T *bp) {
  T t = *ap;
  *ap = *bp;
  *bp = t;
}

template <class T, class U>
void gPrint(T t, U u) {
  std::cout << "t = " << t << ", u = " << u << std::endl;
}

int main() {
  int a = 10, b = 20;
  swap(&a, &b);
  std::cout << "a = " << a << ", b = " << b << std::endl;

  gSwap(&a, &b);
  std::cout << "a = " << a << ", b = " << b << std::endl;

  double x = 4.5, y = 2.9;
  gSwap(&x, &y);
  std::cout << "x = " << x << ", y = " << y << std::endl;

  gPrint(a, x);
}
