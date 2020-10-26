#include <stdio.h>
#include <math.h>

int main() {
  int a, r, n;
  int result;
  
  scanf("%d %d %d", &a, &r, &n);
  result = a * pow(r, n - 1);
  printf("%d", result);
  return 0;
}