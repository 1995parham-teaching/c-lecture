#include <stdio.h>

int lamp_state_change() {
  static int is_on = 0;

  printf("is_on = %d\n", is_on);

  if (is_on == 0) {
    is_on = 1;
  } else {
    is_on = 0;
  }

  return is_on;
}

int main() {
  // lamp_state_change remembers the last state of the lamp.
  lamp_state_change();
  lamp_state_change();
}
