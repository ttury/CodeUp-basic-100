#include <stdio.h>

int main() {
  char input_char;
  while(1) {
    scanf("%c", &input_char);
    printf("%c", input_char);
    if(input_char == 'q') {
      break;
    }
  }
}