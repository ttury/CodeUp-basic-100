#include <stdio.h>

int main() {
  int h, b, c, s;
  int result_bit;
  double result_Byte;
  double result_KB;
  double result_MB;
  //1KHz = 1000Hz
  //result = h x b x c x s
  scanf("%d %d %d %d", &h, &b, &c, &s);
  result_bit = h * b * c * s;
  result_Byte = result_bit / 8;
  result_KB = result_Byte / 1024;
  result_MB = result_KB / 1024;
  printf("%.1f MB", result_MB);
}