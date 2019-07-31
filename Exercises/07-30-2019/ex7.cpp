#include <regex>
#include <iostream>

int main() {
  std::string str;

  std::regex r1("abc*d");
  std::cout << "Give string that matches \"abc*d\"" << std::endl;
  std::cin >> str;
  if (std::regex_match(str, r1)) {
    std::cout << "Match!" << std::endl;
  } else {
    std::cout << "No match!" << std::endl;
  }

  std::regex r2("\\d{3}\\-[0-9]{4}");
  std::cout << "Give string that matches \"\\d{3}\\-[0-9]{4}\"" << std::endl;
  std::cin >> str;
  if (std::regex_match(str, r2)) {
    std::cout << "Match!" << std::endl;
  } else {
    std::cout << "No match!" << std::endl;
  }
}
