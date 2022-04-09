#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int next_prime(int n) {
  if (n == 2) {
    return 3;
  }

  n += 2;
  while (is_prime(n) == 0) {
    n += 2;
  }

  return n;
}

int check_goldbach(int n) {
  int i = 2;

  while (i <= n / 2) {
    int j = n - i;
    if (is_prime(j)) {
      printf("%d = %d + %d\n", n, i, j);

      return 1;
    }
    i = next_prime(i);
  }

  return 0;
}

int main() {
  int n;

  do {
    scanf("%d", &n);

    if (n > 2 && n % 2 == 0) {
      if (check_goldbach(n)) {
        printf("golbach is correct\n");
      } else {
        printf("golbach is incorrect\n");
      }
    } else {
      printf("%d is not greater than 2 or it is not even\n", n);
    }
  } while(n != 0);
}
