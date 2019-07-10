#include <cstdio>

class Point  {
 private:
  int x, y;

 public:
  Point(int, int);
  void print();
  Point &operator--();
};

Point::Point(int a, int b) : x(a), y(b) {
}

Point &Point::operator--() {
  x--;
  y--;

  return *this;
}

void Point::print() {
  printf("x = %d, y = %d\n", x, y);
}

int main() {
  Point p1(2, 3);
  p1.print();
  (--p1).print();
}
