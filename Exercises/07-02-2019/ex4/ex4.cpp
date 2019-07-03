#include <cstdio>
#include <iostream>
#include <string>
#include "ex4.h"

void Student::print() {
  printf("%-10s%-15s%-20s%-6d\n",
         id.c_str(),
         firstName.c_str(),
         lastName.c_str(),
         credits);
}

int main() {
  Student s1;
  s1.id = "22321";
  s1.firstName = "Ken";
  s1.lastName = "Thompson";
  s1.credits = 24;
  s1.print();
}
