#include <iostream>

class A {
 public:
  void f1();
};

class B : public A {
 public:
  void f1();
  void f1(int);
};

void A::f1() {
  std::cout << "A::f1()" << std::endl;
}

void B::f1() {
  std::cout << "B::f1()" << std::endl;
}

void B::f1(int x) {
  std::cout << "B::f1(int)" << std::endl;
}

int main() {
  A a;
  B b;

  a.f1();
  b.f1();
  b.f1(100);
}