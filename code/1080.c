#include <stdio.h>

int main() {
  int input_int;
  int count_int = 1;
  int sum = 0;
  scanf("%d", &input_int);
  while(1) {
    sum += count_int;
    if(sum >= input_int) {
      break;
    }
    count_int++;
  }
  printf("%d", count_int);
}