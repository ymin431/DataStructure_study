// 백준 2573 : 빙산

#include <bits/stdc++.h>
using namespace std ;

#define X first
#define Y second

int n, m, year ;
int board[303][303] ;
int vis[303][303] ;

int dx[4] = {1, 0, -1, 0} ;
int dy[4] = {0, 1, 0, -1} ;

int status(){
  int x = -1, y = -1 ;
  int cnt1 = 0 ;
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++){
      if (board[i][j]) {
        x = i ;
        y = j ;
        cnt1++ ;
      }
    }
  }
  if(cnt1 == 0) return 0 ;
  int cnt2 = 0 ;
  queue<pair<int,int> > q ;
  vis[x][y] = 1 ;
  q.push({x, y}) ;
  while (!q.empty()) {
    auto cur = q.front() ; 
    q.pop() ;
    cnt2++ ;
    for(int i = 0; i < 4; i++) {
      int nx = cur.X + dx[i] ;
      int ny = cur.Y + dy[i ];
      if (!(nx >= 0 && nx < n && ny >= 0 && ny < m) || vis[nx][ny] == 1 ||board[nx][ny] <= 0) continue ; 
      vis[nx][ny] = 1 ; 
      q.push({nx, ny} );
    }
  }
  if (cnt1 == cnt2) return 1 ; 
  return 2 ;
}

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  cin >> n >> m ;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j] ;
    }
  }

  while (1) {
    year++ ;

    // 빙산 녹이기 
    int zero[303][303] = {0} ;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 0) continue ;
        for (int dir = 0 ; dir < 4; dir++) {
          int nx = i + dx[dir] ;
          int ny = j + dy[dir] ;
          if ((i >= 0 && i < n && j >= 0 && j < m) && board[nx][ny] == 0) zero[i][j]++ ;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        board[i][j] = max(0, board[i][j] - zero[i][j]) ;
      }
    }
    // 방문 배열 초기화
    for(int i = 0; i < n; i++) 
      fill(vis[i], vis[i] + m, 0) ;
    
    int check = status() ;
    if (check == 0) {
      cout << 0 ;
      return 0 ;
    }
    else if (check == 1) continue ;
    else break ;
  }

  cout << year ;
  return 0 ;
}