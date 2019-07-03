#include <string>

class Student {
 private:
  std::string id;
  std::string firstName;
  std::string lastName;
  short credits = 0;

 public:
  Student(std::string, std::string, std::string, int);
  void print();
};
