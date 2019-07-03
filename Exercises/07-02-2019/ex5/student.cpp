#include <cstdio>
#include <iostream>
#include <string>
#include "student.h"

Student::Student(std::string i, std::string fn, std::string ln, int c) {
  id = i;
  firstName = fn;
  lastName = ln;
  credits = c;
}

void Student::print() {
  printf("%-10s%-15s%-20s%-6d\n",
         id.c_str(),
         firstName.c_str(),
         lastName.c_str(),
         credits);
}
