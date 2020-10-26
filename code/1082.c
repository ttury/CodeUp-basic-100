#include <stdio.h>

int main() {
  int input_hex;
  scanf("%X", &input_hex);
  for(int i = 1; i <= 0x0F; i++) {
    printf("%X * %X = %X\n", input_hex, i, input_hex * i);
  }
}