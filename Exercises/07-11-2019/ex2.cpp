#include <cstdio>
#include <cmath>

class Student {
 public:
  int id;
  int value;
  Student();
  explicit Student(int);
  Student(const Student &);
  void dump();
};

Student::Student() {
  id = random();
}

Student::Student(int v) : id(random()), value(v) {
}

Student::Student(const Student &s) : id(random()), value(s.value) {
  printf("Copy constructor called!\n");
}

void Student::dump() {
  printf("id = %d, value = %d\n", id, value);
}

void dumpByCopy(Student s) {
  printf("External: id = %d, value = %d\n", s.id, s.value);
}

void dumpByReference(const Student &s) {
  printf("External: id = %d, value = %d\n", s.id, s.value);
}

int main() {
  Student s1(100);
  s1.dump();
  printf("\n");

  Student s2(s1);
  s2.dump();
  printf("\n");

  Student s3 = s1;
  s3.dump();
  printf("\n");

  dumpByCopy(s3);
  printf("\n");

  dumpByReference(s3);
}
