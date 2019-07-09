#include <cmath>
#include <cstdio>

class PointHelper;

class Point {
 private:
  float x, y;
  friend class PointHelper;

 public:
  Point(float, float);
};

Point::Point(float a, float b) : x(a), y(b) {
}

class PointHelper {
 public:
  float value(const Point &p);
};

float PointHelper::value(const Point &p) {
  return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
  Point p1(3, 4);
  PointHelper ph;
  printf("P1 value = %.2f\n", ph.value(p1));
}
