#include <string>
#include <vector>

class String {
 private:
  std::string _value;
  char *getCopy(const char *);

 public:
  explicit String(std::string);
  std::vector<std::string> rAnagrams(std::string = "");
  std::vector<std::string> iAnagrams();
};
