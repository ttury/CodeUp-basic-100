#include <stdio.h>

int main() {
  int r, g, b;
  int count = 0;
  scanf("%d %d %d", &r, &g, &b);
  //0 ~ r-1 까지 r개의 경우의 수 가능
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < g; j++) {
      for(int k = 0; k < b; k++) {
        printf("%d %d %d\n", i, j, k);
        count++;
      }
    }
  }
  printf("%d", count);
  return 0;
}