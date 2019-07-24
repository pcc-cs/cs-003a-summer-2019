#include <vector>
#include <iostream>
#include <algorithm>

int main() {
  std::vector<int> v1 = {10, 20, 30, -2, 11};

  // Ascending.
  std::sort(v1.begin(), v1.end(), [v1](int a, int b) {
    return a < b;
  });
  for (auto i : v1) {
    std::cout << i << std::endl;
  }

  std::cout << std::endl;

  // Descending.
  std::sort(v1.begin(), v1.end(), [](int a, int b) {
    return a > b;
  });
  for (auto i : v1) {
    std::cout << i << std::endl;
  }
}
