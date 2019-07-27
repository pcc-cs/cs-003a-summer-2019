#include <iostream>
#include <cstdint>

unsigned int fact1(unsigned int n) {
  unsigned int f = 1;
  for (; n > 1; --n) {
    f *= n;
  }

  return f;
}

uint64_t fact2(uint64_t n) {
  uint64_t f = 1;
  for (; n > 1; --n) {
    f *= n;
  }

  return f;
}

int main() {
  for (int n = 10; n < 30; ++n) {
    std::cout << "fact1(" << n << ") = " << fact1(n) << std::endl;
    std::cout << "fact2(" << n << ") = " << fact2(n) << std::endl;
  }
}
