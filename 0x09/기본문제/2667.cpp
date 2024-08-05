// 백준 2667 : 단지번호붙이기

#include <bits/stdc++.h>
using namespace std ;

#define X first
#define Y second 

int dx[4] = {1, 0, -1, 0} ;
int dy[4] = {0, 1, 0, -1} ;
int n ;
string board[27] ;
int vis[27][27] ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  cin >> n ;
  for (int i = 0; i < n; i++) {
    cin >> board[i] ;
  }

  int cnt = 0 ;
  vector<int> ans ;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == '0' || vis[i][j] == 1) continue ;

      queue<pair<int, int>> q ;
      vis[i][j] = 1 ;
      q.push({i, j}) ;
      int width = 1 ;
      cnt++ ;

      while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir] ;
          int ny = cur.Y + dy[dir] ;

          if (nx < 0 || n <= nx || ny < 0 || n <= ny) continue ;
          if (board[nx][ny] == '0' || vis[nx][ny] == 1) continue ;

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
    cout << i << '\n' ;

  return 0 ;
}