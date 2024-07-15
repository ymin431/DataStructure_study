// 백준 1267 : 핸드폰 요금

#include <bits/stdc++.h>
using namespace std ;


int arr[10000], Y, M ;
int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int N ;
  cin >> N ;

  for (int i = 0; i < N; i++) {
    cin >> arr[i] ;
    Y += ((arr[i] / 30) + 1) * 10 ;
    M += ((arr[i] / 60) + 1) * 15 ;
  }
  
  if(Y < M) cout << "Y " << Y;
  else if(Y > M) cout << "M " << M;
  else cout << "Y M " << Y;
}