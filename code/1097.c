#include <stdio.h>

int main() {
  int board[20][20];
  int n;
  int x, y;
  
  for(int i = 1; i <= 19; i++) {
    for(int j = 1; j <= 19; j++) {
      scanf("%d", &board[i][j]);
    }
  }
  
  scanf("%d", &n);
  
  for(int k = 0; k < n; k++) {
    scanf("%d %d", &x, &y);
    
    for(int i = 1; i <= 19; i++) {
      board[i][y] = !board[i][y];
    }
    
    for(int j = 1; j <= 19; j++) {
      board[x][j] = !board[x][j];
    }
  }
  
  for(int i = 1; i <= 19; i++) {
    for(int j = 1; j <= 19; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }

  return 0;
  
}