#include <stdio.h>

int main() {
  int n;
  int board[20][20] = {0};
  int x, y;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    board[x][y] = 1;
  }
  
  for(int j = 1; j <= 19; j++) {
    for(int k = 1; k <= 19; k++) {
      printf("%d ", board[j][k]);
    }
    printf("\n");
  }
  
  return 0;
}