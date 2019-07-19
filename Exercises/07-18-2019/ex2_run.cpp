#include <iostream>
#include <cstring>
#include "ex2.h"

int main(int argc, char *argv[]) {
  if (argc < 3 || !(strcmp(argv[2], "r") == 0 || strcmp(argv[2], "i") == 0)) {
    fprintf(stderr, "Usage: %s i|r <word>\n", argv[0]);

    return 1;
  }
  String s(argv[1]);
  for (std::string a : strcmp(argv[2], "r") == 0 ? s.rAnagrams() : s.iAnagrams()) {
    std::cout << a << std::endl;
  }
}
