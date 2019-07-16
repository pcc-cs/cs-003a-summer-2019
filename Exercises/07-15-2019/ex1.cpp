#include <iostream>
#include <map>

struct Point {
  double x, y;
};

int main() {
  std::map<const char *, int> m1;
  m1["foo"] = 100;
  m1["bar"] = 200;

  std::map<int, int> m2;
  m2[100] = 10;

  std::map<const char *, Point> m3 = {
    {"origin", {0, 0}},
    {"begin", {10, 20}},
    {"end", {22, 10}}
  };
}
