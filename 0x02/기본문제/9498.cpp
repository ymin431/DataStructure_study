// 백준 9498 : 시험 성적

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;
  
  int score ;
  cin >> score ;

  if (score >= 90) cout << "A" ;
  else if (score >= 80) cout << "B" ;
  else if (score >= 70) cout << "C" ;
  else if (score >= 60) cout << "D" ;
  else cout << "F" ;
}