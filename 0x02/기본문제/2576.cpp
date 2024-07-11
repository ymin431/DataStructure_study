// 백준 2576 : 홀수

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int arr[8], sum = 0, min = 100 ;
  for (int i = 0; i < 7; i++) {
    cin >> arr[i] ;
    if (arr[i] % 2 == 1) {
      sum += arr[i] ;
      if (min > arr[i]) min = arr[i] ;
    }
  }
  if (min == 100) cout << -1 ;
  else cout << sum << "\n" << min ;
}