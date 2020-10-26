#include <stdio.h>

int main() {
  int input_int;
  scanf("%d", &input_int);
  for(int i = 1; i <= input_int; i++) {
    if((i % 10) % 3 == 0) {
      printf("X ");
    }
    else {
      printf("%d ", i);
    }
  }
}