#include <deque>
#include <iostream>

int main() {
  std::deque<int> n1 = {10, 20, 30};
  n1.push_back(40);

  for (auto it = n1.begin(); it != n1.end(); it++) {
    std::cout << *it << std::endl;
  }

  std::cout << std::endl;

  for (auto it = n1.rbegin(); it != n1.rend(); it++) {
    std::cout << *it << std::endl;
  }

  std::cout << n1[0] << std::endl;
}
