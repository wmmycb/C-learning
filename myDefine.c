#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y));

#define PRINT_INT(n) printf(#n " = %d\n", n);

#define GENERIC_MAX(type) type type##_max(type x,type y) { return x > y ? x : y; };

GENERIC_MAX(float);

int main() {
  int i;
  i = MAX(1, 8);
  printf("%d\n", i);
  int j = 4;
  PRINT_INT(i / j);
  printf("%f", float_max(1.2, 3.4));

  struct {
    int number;
    char name;
    int on_heade;
  } part1, part2;

  return 1;
}