#include <stdio.h>

int bsearch(int start, int end, int arr[], int value) {
  int mid = (start + end) / 2;

  printf("start: %d, end: %d, mid: %d\n", start, end, mid);

  if (arr[mid] == value) {
    return mid;
  } else if (start == end) {
    return -1;
  } else if (arr[mid] > value) {
    return bsearch(start, mid - 1, arr, value);
  } else {
    return bsearch(mid + 1, end, arr, value);
  }
}

int main() {
  int arr[] = {1, 10, 30, 45, 90, 186, 1024};
  int size = sizeof(arr) / sizeof(arr[0]);

  int index = bsearch(0, size - 1, arr, 95);
  printf("index = %d\n", index);
}
