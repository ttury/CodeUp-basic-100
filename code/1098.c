#include <stdio.h>

int main() {
  int h, w;
  int board[101][101] = {0};
  int n;
  int l, d, x, y;
  
  scanf("%d %d", &h, &w);
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    
    scanf("%d %d %d %d", &l, &d, &x, &y);
    
    if(d == 0) {
      for(int j = y; j < y + l; j++) {
        board[x][j] = 1;
      }
    }
    
    else if(d == 1) {
      for(int k = x; k < x + l; k++) {
        board[k][y] = 1;
      }
    }
    
  }
  
  for(int i = 1; i <= h; i++) {
    for(int j = 1; j <= w; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }
  
}