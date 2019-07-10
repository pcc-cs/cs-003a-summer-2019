#include <cstdio>

struct Duo {
  int a, b;
};

class Point {
 private:
  int x, y;

 public:
  Point();
  Point(int, int);
};

Point::Point() {
}

Point::Point(int a, int b) : x(a), y(b) {
}

int main() {
  Duo da1[] = {
    {1, 2},
    {22, 3},
    {-9, 4}
  };
  Point pa1[0x10];
  Point pa2[] = {
    Point(10, 20),
    Point(-2, 7),
    Point(1, -10)
  };
  Point *pp1 = new Point[0x10];
}
