#include <vector>
#include <iostream>

int main() {
  std::vector<int> n1 = {10, 20, 30};
  n1.push_back(40);

  for (auto it = n1.begin(); it != n1.end(); it++) {
    std::cout << *it << std::endl;
  }

  std::cout << std::endl;

  for (auto it = n1.rbegin(); it != n1.rend(); it++) {
    std::cout << *it << std::endl;
  }

  std::cout << std::endl;

  std::vector<int> n2;
  for (int i = 0; i < 30; ++i) {
    std::cout << "n2.size() = " << n2.size();
    std::cout << ", n2.capacity() = " << n2.capacity() << std::endl;
    n2.push_back(i);
  }

  std::cout << n2[0] << std::endl;
}
