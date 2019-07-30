#include <iostream>

// Better, place code from both into swap.h.
#include "swap.h"
#include "swap.cpp"

int main() {
  int a = 10, b = 20;
  gSwap(&a, &b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
}
