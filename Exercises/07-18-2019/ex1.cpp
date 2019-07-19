#include <cstdio>
#include <map>
#include <string>

int main() {
  std::map<const char *, int> v;

  v["red"] = 100;
  v["white"] = 200;
  v["blue"] = 300;

  printf("%d, %d, %d\n", v["red"], v["white"], v["blue"]);

  for (auto e : v) {
    printf("v[%s] = %d\n", e.first, e.second);
  }

  std::string key = "red";
  printf("v[%s] = %d\n", key.c_str(), v[key.c_str()]);
}
