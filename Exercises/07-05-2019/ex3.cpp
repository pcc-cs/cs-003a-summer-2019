/**
 * Abstract Data Type.
 *
 * Copyright (c) 2019, Sekhar Ravinutala.
 */

#include <cstdio>

class SingleDigit {
 private:
  int value;
 public:
  explicit SingleDigit(int);
  SingleDigit operator+(SingleDigit);
  int getValue();
};

SingleDigit::SingleDigit(int v) : value(v % 10) {
}

SingleDigit SingleDigit::operator+(SingleDigit d) {
  return SingleDigit(value + d.value);
}

int SingleDigit::getValue() {
  return value;
}

SingleDigit *add(SingleDigit d1, SingleDigit d2) {
  SingleDigit d(d1.getValue() + d2.getValue());

  return &d;
}

int main() {
  SingleDigit d1(5);
  SingleDigit d2(7);
  SingleDigit d3 = d1 + d2;

  printf("%d + %d = %d\n",
    d1.getValue(), d2.getValue(), d3.getValue());
  printf("%d + %d = %d\n",
    d1.getValue(), d2.getValue(), add(d1, d2)->getValue());
}
