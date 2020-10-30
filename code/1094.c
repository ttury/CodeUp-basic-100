#include <stdio.h>

int main() {
  int n;
  int k[10001];
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &k[i]);
  }
  
  for(int j = n-1; j >= 0; j--) {
    printf("%d ", k[j]);
  }
  
  return 0;
}