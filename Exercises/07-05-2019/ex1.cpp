/**
 * Exercise 1.
 *
 * Copyright (c) 2019, Sekhar Ravinutala.
 */

#include <string>

class Student {
 private:
  std::string name;
  int credits;

 public:
  Student(std::string);
  Student(int);
};

Student::Student(std::string n) : name(n) {
  printf("name: %s\n", n.c_str());
}

Student::Student(int c) : credits(c) {
  printf("credits: %d\n", c);
}

int main() {
  // Don't do this!
  Student s1 = std::string("Rob Pike");
  Student s2 = 12;
}
