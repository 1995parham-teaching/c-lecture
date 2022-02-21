#include <stdio.h>
#include <tgmath.h>

int main() {
  int precision = 0;

  scanf("%d", &precision);

  printf("%.*lf\n", precision, M_PI);
}
