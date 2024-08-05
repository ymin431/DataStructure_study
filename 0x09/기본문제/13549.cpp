// 백준 13549 : 숨바꼭질 3

#include <bits/stdc++.h>
using namespace std ;

int n, k ;
int dist[200002] ;
int MX = 200000 ;
deque<int> dq ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  cin >> n >> k ;
  fill(dist, dist + MX, -1) ;

  dq.push_back(n) ;
  dist[n] = 0 ;
  
  while (!dq.empty()) {
    int cur = dq.front() ;
    dq.pop_front() ;

    if (2 * cur < MX && dist[2 * cur] == -1) {
      dist[2 * cur] = dist[cur] ;
      dq.push_front(2 * cur) ;
    }
    for (int i : {cur - 1, cur + 1}) {
      if (i < 0 || i >= MX || dist[i] != -1) continue ;
      dist[i] = dist[cur] + 1 ;
      dq.push_back(i) ;
    }
  }
  cout << dist[k] ;
}