// 백준 10093 : 숫자

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  long long A, B ;
  cin >> A >> B ;
  
  if (A == B) {
    cout << 0 ;
    return 0 ;
  }

  if (A > B) {
    long long temp = A ;
    A = B ;
    B = temp ;
  }
   
  cout << B - A - 1 << "\n" ; 
  for (long long i = A + 1; i < B; i++) {
    cout << i << " " ;
  }
}