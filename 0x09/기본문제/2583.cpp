// 백준 2583 : 영역 구하기

#include <bits/stdc++.h>
using namespace std ;

#define X first
#define Y second 

int dx[4] = {1, 0, -1, 0} ;
int dy[4] = {0, 1, 0, -1} ;
int m, n, k ;
int board[102][102] ;
int vis[102][102] ;
queue<pair<int, int>> q ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  cin >> m >> n >> k ;

  while (k--) {
    int x1, y1, x2, y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;

    for (int i = y1; i < y2; i++) {
      for (int j = x1 ; j < x2; j++) {
        board[i][j] = 1 ;
      }
    }
  }

  int cnt = 0 ;
  vector<int> ans ;

  for (int i = 0 ; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == 1 || vis[i][j] == 1) continue ;
      
      vis[i][j] = 1 ;
      q.push({i, j}) ;

      int width = 1 ;
      cnt ++ ;
      while (!q.empty()) {
        auto cur = q.front() ;
        q.pop() ;

        for (int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir] ;
          int ny = cur.Y + dy[dir] ;

          if (nx < 0 || m <= nx || ny < 0 || n <= ny) continue ;
          if (board[nx][ny] == 1 || vis[nx][ny] == 1) continue ;

          q.push({nx, ny}) ;
          vis[nx][ny] = 1 ;
          width++ ;
        }
      }
      ans.push_back(width) ;
    }
  }

  sort(ans.begin(), ans.end()) ;

  cout << cnt << '\n' ;
  for (int i : ans) 
    cout << i << ' ' ;

  return 0 ;
}