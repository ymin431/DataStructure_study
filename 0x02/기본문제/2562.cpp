// 백준 2562 : 최댓값

#include <bits/stdc++.h>
using namespace std ;

int n, max_value, index_value ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  for (int i = 1; i < 10; i++) {
    cin >> n ;
    if (max_value < n) {
      max_value = n ;
      index_value = i ;
    }
  }
  
  cout << max_value << "\n" << index_value ;
}