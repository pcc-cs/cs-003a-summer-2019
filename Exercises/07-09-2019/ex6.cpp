#include <cstring>
#include <cstdio>

#define SIZE 0x100

class Student {
 private:
  char *essay;

 public:
  Student();
  ~Student();
  void addEssay(const char *essay);
};

Student::Student() {
  essay = new char[SIZE];
}

Student::~Student() {
  printf("Destructor!\n");
  delete [] essay;
}

void Student::addEssay(const char *value) {
  strncpy(essay, value, SIZE);
}

void admit() {
  for (int i = 0; i < 10; ++i) {
    Student s;
    printf("Created!\n");
    s.addEssay("whatever");
  }
}

int main() {
  printf("***** BEFORE *****\n");
  admit();
  printf("***** AFTER *****\n");
}
