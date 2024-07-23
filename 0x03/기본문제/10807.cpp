// 백준 10807 : 개수 세기

#include <bits/stdc++.h>
using namespace std ;

int arr[201];

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int n, temp, v ;
  cin >> n ;
  for (int i = 0; i < n; i++) {
      cin >> temp ;
      arr[100 + temp]++ ;
  }
  cin >> v ;
  cout << arr[100 + v] ;
}