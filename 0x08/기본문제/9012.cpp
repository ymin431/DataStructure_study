// 백준 9012 : 괄호

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int n ;

  cin >> n ;

  while (n--) {
    string a ;
    cin >> a ;

    stack<int> s ;
    bool isValid = true ;

    for (auto c : a) {
      if (c == '(') s.push(c) ;
      else {
        if (s.empty() || s.top() != '(') {
          isValid = false ;
          break ;
        }
        s.pop() ;
      }
    }
    if (!s.empty()) isValid = false ;
    
    if (isValid) cout << "YES\n" ;
    else cout << "NO\n" ;
  }
}