#include <vector>
#include <iostream>
#include <algorithm>

bool asc(int a, int b) {
  return a < b;
}

bool desc(int a, int b) {
  return a > b;
}

int main() {
  std::vector<int> v1 = {10, 20, 30, -2, 11};

  // Ascending.
  std::sort(v1.begin(), v1.end(), asc);
  for (auto i : v1) {
    std::cout << i << std::endl;
  }

  std::cout << std::endl;

  // Descending.
  std::sort(v1.begin(), v1.end(), desc);
  for (auto i : v1) {
    std::cout << i << std::endl;
  }
}
