#include <cstdio>
#include <iostream>
#include <string>
#include "student.h"

Student::Student() {
  id = "xxx";
}

Student::Student(std::string i) {
  id = i;
}

Student::Student(std::string i, std::string fn, std::string ln, int c) :
  id(i), firstName(fn), lastName(ln), credits(c) {
}

std::string Student::getFirstName() {
  return firstName;
}

void Student::setLastName(std::string ln) {
  lastName = ln;
}

void Student::print() {
  printf("%-10s%-15s%-20s%-6d\n",
         id.c_str(),
         firstName.c_str(),
         lastName.c_str(),
         credits);
}
