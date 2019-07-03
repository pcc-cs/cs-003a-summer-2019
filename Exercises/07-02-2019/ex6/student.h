#include <string>

class Student {
 private:
  std::string id;
  std::string firstName;
  std::string lastName;
  short credits = 0;

 public:
  Student();
  explicit Student(std::string);
  Student(std::string, std::string, std::string, int);
  std::string getFirstName();
  void setLastName(std::string);
  void print();
};
