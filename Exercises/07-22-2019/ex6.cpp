#include <iostream>

class A {
 public:
  virtual ~A();
};

class B : public A {
 public:
  ~B();
};

A::~A() {
  std::cout << "A::~A()" << std::endl;
}

B::~B() {
  std::cout << "B::~B()" << std::endl;
}

int main() {
  A *ap1 = new A();
  delete ap1;

  std::cout << std::endl;

  B *bp1 = new B();
  delete bp1;

  std::cout << std::endl;

  A *ap2 = new B();
  delete ap2;
}
