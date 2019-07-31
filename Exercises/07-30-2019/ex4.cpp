#include <set>
#include <iostream>

#define P(s, e) (s.find(e) != s.end())
#define BOOL(b) (b ? "Yes" : "No")

int main() {
  std::set<int> s1;

  std::cout << BOOL(s1.find(10) != s1.end()) << std::endl;

  s1.insert(10);
  std::cout << s1.size() << std::endl;
  std::cout << BOOL(P(s1, 10)) << std::endl;

  s1.insert(10);
  std::cout << s1.size() << std::endl;


}
