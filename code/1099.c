#include <stdio.h>

int main() {
  int board[11][11];
  int x = 2;
  int y = 2;
  for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 10; j++) {
      scanf("%d", &board[i][j]);
    }
  }
  
  while(board[x][y] != 2) {
    board[x][y] = 9;
    if(board[x][y+1] == 0 || board[x][y+1] == 2) {
      y++;
      continue;
    }
    else if(board[x+1][y] == 0 || board[x+1][y] == 2) {
      x++;
      continue;
    }
    break;
  }
  board[x][y] = 9;
  
  for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 10; j++) {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}