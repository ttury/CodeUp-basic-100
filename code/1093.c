#include <stdio.h>

int main() {
  int n;
  int temp;
  int sorted_number[24] = {0};
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    scanf("%d", &temp);
    sorted_number[temp]++;
  }
  for(int j = 1; j <= 23; j++) {
    printf("%d ", sorted_number[j]);
  }
  return 0;
}