// 백준 5427 : 불

#include <bits/stdc++.h>
using namespace std ;

#define X first
#define Y second

int t, m, n ;
int visF[1002][1002] ;
int visS[1002][1002] ;
int dx[4] = {0, 0, 1, -1} ;
int dy[4] = {1, -1, 0, 0} ;
queue<pair<int, int>> qF, qS ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  cin >> t ;

  while (t--) {
    cin >> m >> n ;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        char temp ;
        cin >> temp ;

        if (temp == '#') {
          visF[i][j] = -1 ;
          visS[i][j] = -1 ;
        }
        else if (temp == '*') {
          visF[i][j] = 1 ;
          visS[i][j] = -1 ;
          qF.push({i, j}) ;
        }
        else if (temp == '.') {
          visF[i][j] = 0 ;
          visS[i][j] = 0 ;
        }
        else if (temp == '@') {
          visF[i][j] = 0 ;
          visS[i][j] = 1 ;
          qS.push({i, j}) ;
        }
      }
    }
    while (!qF.empty()) {
        auto curF = qF.front() ;
        qF.pop() ;

        for (int i = 0; i < 4; i++) {
          int nx = curF.X + dx[i] ;
          int ny = curF.Y + dy[i] ;

          if (nx < 0 || n <= nx || ny < 0 || m <= ny) continue ;
          if (visF[nx][ny] != 0 || visF[nx][ny] == -1) continue ;

          visF[nx][ny] = visF[curF.X][curF.Y] + 1 ;
          qF.push({nx, ny}) ;
        }
      }

      bool escape = false ;

      while (!qS.empty() && !escape) {
        auto curS = qS.front() ;
        qS.pop() ;

        for (int i = 0; i < 4; i++) {
          int nx = curS.X + dx[i] ;
          int ny = curS.Y + dy[i] ;

          if (nx < 0 || n <= nx || ny < 0 || m <= ny) {
            cout << visS[curS.X][curS.Y] << "\n" ;
            escape = true ;
            break ;
          }
          if (visS[nx][ny]) continue ;
          if (visF[nx][ny] != 0 && visF[nx][ny] <= visS[curS.X][curS.Y] + 1) continue ;

          visS[nx][ny] = visS[curS.X][curS.Y] + 1;
          qS.push({nx, ny});
        }
      }
    if (!escape) cout << "IMPOSSIBLE" << '\n';
  }
}