#include <stdio.h>

int main() {
  int input_int;
  int count = 1;
  int sum = 0;
  scanf("%d", &input_int);
  while(1) {
    sum += count;
    if(sum >= input_int) {
      break;
    }
    count++;
  }
  printf("%d", sum);
  return 0;
}