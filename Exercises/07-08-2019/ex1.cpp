#include <cmath>
#include <cstdio>

class Point {
 private:
  float x, y;
  friend float pointValue(const Point &);

 public:
  Point(float, float);
  float value();
};

Point::Point(float a, float b) : x(a), y(b) {
}

float Point::value() {
  return sqrt(x * x + y * y);
}

float pointValue(const Point &p) {
  return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
  Point p1(3, 4);
  printf("p1 value = %.1f\n", p1.value());
  printf("p1 value = %.1f\n", pointValue(p1));
}
