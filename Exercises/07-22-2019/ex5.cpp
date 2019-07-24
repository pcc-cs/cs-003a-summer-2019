#include <iostream>

class A {
 public:
  virtual void f1();
};

class B : public A {
 public:
  void f1();
  void f1(int);
};

class C : public A {
 public:
  void f1();
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

void C::f1() {
  std::cout << "C::f1()" << std::endl;
}

int main() {
  B *bp = new B();
  C *cp = new C();
  A *ap;

  // By pointer.
  ap = bp;
  ap->f1();
  ap = cp;
  ap->f1();

  std::cout << std::endl;

  // By reference.
  A &a1 = *bp;
  a1.f1();
  A &a2 = *cp;
  a2.f1();

  std::cout << std::endl;

  // By value.
  A a3 = *bp;
  a3.f1();
  A a4 = *cp;
  a4.f1();
}
