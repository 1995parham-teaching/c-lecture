#include <stdio.h>

int main() {
  int k = 0;

  {
    int k = 1;

    printf("inner k = %d\n", k);

    k++;

    printf("inner k = %d\n", k);
  }

  printf("outer k = %d\n", k);
}
