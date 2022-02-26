#include <stdio.h>
#include <stdbool.h>

int main() {
  int a = 10;
  float b = 10.0f;
  int c = 20;

  bool b1 = a == b;
  bool b2 = a == c;
  bool b3 = b1 && b2;

  printf("b1 = %d, b2 = %d, b3 = %d\n", b1, b2, b3);
}
