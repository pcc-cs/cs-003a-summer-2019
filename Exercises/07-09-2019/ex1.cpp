#include <cstdio>

#define COUNT 100

const int SIZE = 100;

class Point {
 public:
  int x, y;
  Point(int, int);
  void print();
};

Point::Point(int a, int b) : x(a), y(b) {
}

void Point::print() {
  printf("x = %d, y = %d\n", x, y);
}

Point copyPointA(const Point &p) {
  return  Point(p.x, p.y);
}

Point copyPointB(const Point *pp) {
  return  Point(pp->x, pp->y);
}

int main() {
    printf("COUNT = %d, SIZE = %d\n", COUNT, SIZE);

    Point p1(10, 20);
    Point p2 = copyPointA(p1);
    Point p3 = copyPointB(&p1);

    p1.print();
    p2.print();
    p3.print();
}
