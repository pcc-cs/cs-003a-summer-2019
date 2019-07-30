#include <iostream>

template <class T>
class Numbers {
 private:
  T _a, _b;

 public:
  Numbers(T, T);
  void swap() {
    T t = _a;
    _a = _b;
    _b = t;
  }
  void dump();
};

template <class T>
Numbers<T>::Numbers(T a, T b) : _a(a), _b(b) {
}

template <class T>
void Numbers<T>::dump() {
  std::cout << "a = " << _a << ", b = " << _b << std::endl;
}

int main() {
  Numbers<int> i(10, 20);
  i.dump();
  i.swap();
  i.dump();

  Numbers<double> d(2.2, 4.7);
  d.dump();
  d.swap();
  d.dump();
}
