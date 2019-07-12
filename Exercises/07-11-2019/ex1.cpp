#include <cstdio>
#include <cmath>

class Student {
 private:
  int id;
  int value;

 public:
  Student();
  explicit Student(int);
  void dump();
};

Student::Student() {
  id = random();
}

Student::Student(int v) : id(random()), value(v) {
}

void Student::dump() {
  printf("id = %d, value = %d\n", id, value);
}

int main() {
  Student s1(100);
  s1.dump();

  Student s2(200);
  s2.dump();

  s2 = s1;
  s2.dump();

  printf("&s1 = %p, &s2 = %p\n", &s1, &s2);
}
