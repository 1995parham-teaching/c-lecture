#include <stdio.h>

int main() {
  int num[100] = {};
  // same as int num[100] = {0};

  for (int i = 0; i < 100; i++) {
    printf("num[%d] = %d\n", i, num[i]);
  }
}
