#include <stdio.h>

int main() {
  int sum = 0;
  int n;

  do {
    scanf("%d", &n);
    sum += n;
  } while(n != 0);

  printf("sum = %d\n", sum);
}
