#include <stdio.h>

int main() {
  int d1;
  int d2;
  char c1;
  char c2;

  scanf("%d %c%d", &d1, &c1, &d2);
  scanf("\n%c", &c2);

  printf(
      "d1 = %d, d2 = %d, c1 = \"%c\", c2 = \"%c\"\n",
      d1, d2, c1, c2);
}
