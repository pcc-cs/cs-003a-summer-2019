#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include "ex2.h"

String::String(std::string value) : _value(value) {
}

char *String::getCopy(const char *str) {
  int len = strlen(str);
  char *copy = new char[len + 1];
  strncpy(copy, str, len);

  return copy;
}

std::vector<std::string> String::rAnagrams(std::string value) {
  std::vector<std::string> list;
  if (value.empty()) {
    value = _value;
  }
  if (value.size() == 1) {
    list.push_back(value);
  } else {
    for (size_t i = 0; i < value.size(); ++i) {
      std::string other = value.substr(0, i) + value.substr(i + 1);
      for (std::string a : rAnagrams(other)) {
        list.push_back(value.substr(i, 1) + a);
      }
    }
  }

  return list;
}

std::vector<std::string> String::iAnagrams() {
  std::vector<std::string> list;
  char *value = getCopy(_value.c_str());
  int len = strlen(value);
  do {
    list.push_back(value);
  } while (std::next_permutation(value, value + len));

  return list;
}
