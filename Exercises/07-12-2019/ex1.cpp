#include <cstdio>

int g1;
int g2;
char g3[0x10];
double g4;

int main() {
  int a;
  int b;
  char c[0x10];
  double d;

  printf("%p, %p, %p, %p\n", &g1, &g2, &g3, &g4);
  printf("%p, %p, %p, %p\n", &a, &b, &c, &d);

  g1 = 100;
  printf("g1 = %d\n", g1);

  char *s1 = reinterpret_cast<char *>(&g1);
  printf("s1 = %s\n", s1);

  s1[1] = 'a';
  printf("s1 = %s\n", s1);
  printf("g1 = %d\n", g1);

  int *g1p = &g1;
  printf("g1p = %p, s1 = %p\n", g1p, s1);
  printf("g1p+1 = %p, s1+1 = %p\n", g1p+1, s1+1);
}
