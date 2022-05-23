#include <stdio.h>

union test1 {
    int x;
    int y;
} Test1;

union test2 {
    int x;
    char y;
} Test2;

union test3 {
    int arr[10];
    char y;
} Test3;

int main() {
    printf("sizeof(test1) = %lu, "
           "sizeof(test2) = %lu, "
           "sizeof(test3) = %lu\n",
           sizeof(Test1),
           sizeof(Test2), sizeof(Test3));
    return 0;
}
