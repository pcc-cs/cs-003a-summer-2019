#include <string>

class Student {
 public:
  std::string id;
  std::string firstName;
  std::string lastName;
  int credits = 0;

  void print();
};
