#include <iostream>
#include <typeinfo>

namespace my {
  typedef const char *string;
}

int main() {
  std::string s1 = "Hello";
  my::string s2 = "Hi";

  std::cout << "s1 type: " << typeid(s1).name() << std::endl;
  std::cout << "s2 type: " << typeid(s2).name() << std::endl;
}
