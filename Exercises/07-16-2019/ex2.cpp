#include <vector>
#include <iostream>

class String {
 private:
  std::string _value;

 public:
  explicit String(std::string);
  std::vector<std::string> anagrams(std::string = "");
};

String::String(std::string value) : _value(value) {
}

std::vector<std::string> String::anagrams(std::string value) {
  std::vector<std::string> list;
  if (value.empty()) {
    value = _value;
  }
  if (value.size() == 1) {
    list.push_back(value);
  } else {
    int size = value.size();
    for (int i = 0; i < size; ++i) {
      std::string other = value.substr(0, i) + value.substr(i + 1);
      for (std::string a : anagrams(other)) {
        list.push_back(value.substr(i, 1) + a);
      }
    }
  }

  return list;
}

int main() {
  std::string value;
  while (std::cin >> value) {
    String s(value);
    for (std::string a : s.anagrams()) {
      std::cout << a << std::endl;
    }
  }
}
