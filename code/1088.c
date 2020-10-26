#include <stdio.h>

int main() {
  int input_int;
  int count_int = 1;
  scanf("%d", &input_int);
  while(count_int <= input_int) {
    if(count_int % 3 == 0) {
      count_int++;
      continue;
    }
    printf("%d ", count_int);
    count_int++;
  }
}