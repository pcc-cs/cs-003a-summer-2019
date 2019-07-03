#include <iostream>
#include "student.h"

int main() {
  Student s1("22321", "Ken", "Thompson", 24);
  s1.print();

  std::cout << s1.getFirstName() << std::endl;

  Student s2 = Student("33211", "Dennis", "Ritchie", 12);
  Student s3 = {"444532", "Brian", "Kernighan", 12};
  Student s4 {"444432", "Brian", "Pike", 12};

  Student s5;
  s5.print();

  Student s6("444232");
  s6.print();
}
