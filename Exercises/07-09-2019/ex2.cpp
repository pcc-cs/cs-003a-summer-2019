#include <cstdio>

class Point  {
 private:
  int x, y;

 public:
  Point(int, int);
  void print();
  Point operator+(const Point &p);
};

Point::Point(int a, int b) : x(a), y(b) {
}

Point Point::operator+(const Point &p) {
  return Point(x + p.x, y + p.y);
}

void Point::print() {
  printf("x = %d, y = %d\n", x, y);
}

int main() {
  Point p1(2, 3);
  p1.print();

  Point p2(3, 1);
  p2.print();

  (p1 + p2).print();
}
