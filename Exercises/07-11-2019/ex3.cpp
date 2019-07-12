#include <cstdio>
#include <cmath>

class Student {
 public:
  int id;
  int value;
  Student();
  explicit Student(int);
  Student operator=(const Student &);
  void dump();
};

Student::Student() : id(random()) {
}

Student::Student(int v) : id(random()), value(v) {
}

Student Student::operator=(const Student &s) {
  printf("Operator overloading!\n");
  value = s.value;

  return *this;
}

void Student::dump() {
  printf("id = %d, value = %d\n", id, value);
}

int main() {
  Student s1(50);
  s1.dump();
  printf("\n");

  Student s2 = s1;
  s2.dump();
  printf("\n");

  Student s3;
  s3 = s1;
  s3.dump();
}
