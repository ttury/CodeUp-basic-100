#include <stdio.h>

int main() {
  int n;
  int k[10000];
  int min = 10000;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &k[i]);
    if(k[i] < min) {
      min = k[i];
    }
  }
  
  printf("%d", min);
}