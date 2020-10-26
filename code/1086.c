#include <stdio.h>

int main() {
  int w, h, b;
  int result_bit;
  double result_Byte;
  double result_KB;
  double result_MB;
  
  scanf("%d %d %d", &w, &h, &b);
  result_bit = w * h * b;
  result_Byte = result_bit / 8;
  result_KB = result_Byte / 1024;
  result_MB = result_KB / 1024;
  printf("%.2f MB", result_MB);
  
  return 0;
}